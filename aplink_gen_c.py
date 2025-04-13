import json
from jinja2 import Template

template = Template('''
// Auto-generated C
''')

type_mappings = {
    "float": "f",
    "uint8_t": "B",
    "int8_t": "b",
    "uint16_t": "H",
    "int16_t": "h",
    "uint32_t": "I",
    "int32_t": "i",
    "double": "d",
}

messages = json.load(open("messages.json", "r"))

formats = []
for message in messages:
    formats.append("".join(type_mappings[field["type"]] for field in message["fields"]))

c_code = template.render(messages=messages, formats=formats)

f = open("aplink_c/aplink.h", "w")
f.write(c_code)
f.close()