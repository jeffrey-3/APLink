import json
import shutil
from jinja2 import Template

# Don't need packing, just manually set the values

# what if I just keep padding? No harm?

# This is what mavclink does: char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN];
    #_mav_put_uint32_t(buf, 0, time_boot_ms);

template = Template('''
#ifndef APLINK_H_
#define APLINK_H_ 

// Auto-generated C
                    
#include <stdint.h>

{% for i in range(messages|length) %}  
#define {{ messages[i].msg_name|upper }}_MSG_ID {{ messages[i].msg_id }}

struct aplink_{{ messages[i].msg_name }} 
{
    {% for field in messages[i].fields %}
    {{ field.type }} {{ field.name }};
    {% endfor %}
};
                    
void aplink_{{ messages[i].msg_name }}_pack()
{
    
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