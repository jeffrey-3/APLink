import json
import shutil
from jinja2 import Template

template = Template('''
#ifndef APLINK_MESSAGES_H_
#define APLINK_MESSAGES_H_ 

// Auto-generated C

#include "aplink.h" 
#include <stdint.h>
#include <string.h>
                    
{% for enum in enums %}
enum {{ enum.enum_name }}
{
    {% for entry in enum.entries %}
    {{ entry }},
    {% endfor %}
};
{% endfor %}

{% for i in range(messages|length) %}  
#define {{ messages[i].msg_name|upper }}_MSG_ID {{ i }}

#pragma pack(push, 1)
typedef struct aplink_{{ messages[i].msg_name }} 
{
    {% for field in messages[i].fields %}
    {% if 'count' in field %}
    {{ field.type }} {{ field.name }}[{{ field.count }}];
    {% else %}
    {{ field.type }} {{ field.name }};
    {% endif %}
    {% endfor %}
} aplink_{{ messages[i].msg_name }}_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_{{ messages[i].msg_name }}_pack(aplink_{{ messages[i].msg_name }}_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), {{ messages[i].msg_name|upper }}_MSG_ID);
}
                    
inline bool aplink_{{ messages[i].msg_name }}_unpack(aplink_msg_t* msg, aplink_{{ messages[i].msg_name }}_t* output) {
    if (msg->payload_len == sizeof(aplink_{{ messages[i].msg_name }}_t)) {
        memcpy(output, msg->payload, sizeof(aplink_{{ messages[i].msg_name }}_t));
        return true;
    }
    return false;
}
{% endfor %}
                    
#endif /* APLINK_MESSAGES_H_ */
''')

messages = json.load(open("format.json", "r"))["messages"]
enums = json.load(open("format.json", "r"))["enums"]

c_code = template.render(messages=messages, enums=enums)

f = open("output/aplink_c/aplink_messages.h", "w")
f.write(c_code)
f.close()

shutil.copytree("c", "output/aplink_c", dirs_exist_ok=True)