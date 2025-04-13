import json
import shutil
from jinja2 import Template

template = Template('''
#ifndef APLINK_H_
#define APLINK_H_ 

// Auto-generated C

#include "aplink.h" 
#include <stdint.h>
#include <string.h>

{% for i in range(messages|length) %}  
#define {{ messages[i].msg_name|upper }}_MSG_ID {{ messages[i].msg_id }}

#pragma pack(push, 1)
typedef struct aplink_{{ messages[i].msg_name }} 
{
    {% for field in messages[i].fields %}
    {{ field.type }} {{ field.name }};
    {% endfor %}
} aplink_{{ messages[i].msg_name }}_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_{{ messages[i].msg_name }}_pack(aplink_{{ messages[i].msg_name }}_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_{{ messages[i].msg_name }}_unpack(aplink_msg_t* msg, aplink_{{ messages[i].msg_name }}_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
{% endfor %}
                    
#endif /* APLINK_H_ */
''')

messages = json.load(open("messages.json", "r"))

c_code = template.render(messages=messages)

f = open("output/aplink_c/aplink_messages.h", "w")
f.write(c_code)
f.close()

shutil.copytree("c", "output/aplink_c", dirs_exist_ok=True)