import json
import shutil
from jinja2 import Template

template = Template('''
# Auto-generated Python

import struct
from output.aplink_python.aplink_helpers import APLink

{% for i in range(messages|length) %}        
class aplink_{{ messages[i].msg_name }}:
    format = "={{ formats[i] }}"
    msg_id = {{ messages[i].msg_id }}  
                      
    {% for field in messages[i].fields %}
    {{ field.name }} = None
    {% endfor %}
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        {% for field in messages[i].fields %}self.{{ field.name }}, {% endfor %}= struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self{% for field in messages[i].fields %}, {{ field.name }}{% endfor %}):
        payload = struct.pack(format{% for field in messages[i].fields %}, {{ field.name }}{% endfor %})
        return APLink().pack(payload, self.msg_id)
{% endfor %}
''')

type_mappings = {
    "bool": "?",
    "uint8_t": "B",
    "int8_t": "b",
    "uint16_t": "H",
    "int16_t": "h",
    "uint32_t": "I",
    "int32_t": "i",
    "float": "f",
    "double": "d"
}

messages = json.load(open("messages.json", "r"))

formats = []
for message in messages:
    formats.append("".join(type_mappings[field["type"]] for field in message["fields"]))

python_code = template.render(messages=messages, formats=formats)

f = open("output/aplink_python/aplink_messages.py", "w")
f.write(python_code)
f.close()

shutil.copytree("py", "output/aplink_python", dirs_exist_ok=True)