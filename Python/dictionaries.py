"""FROM INTRODUCTORY WORKBOOK
student = {
    "name": "Will",
    "age": 28,
    "courses": ["Programming", "Advanced Maths", "Control & Instrumentation"]
}
#Lines 1 to 5 define the terms related to the student
print("Name:", student["name"])
print("Age:", student ["age"])
print("Courses", student ["courses"] )
#Lines 7 to 9 print the specific details as mentioned. This is also true of lines 11 and 12.
student["graduation_year"] = 2028
print ("Updated student dictionary:", student)
"""
Habitats ={
    "forest":["deer","pheasant","rabbit"],
    "desert":["camel","llama","scorpion"],
    "ocean":["whale","dolphin","shark"]
}
Habitats["sky"]=["goldfinch","eagle","butterfly"]
print("Updated Classes:",Habitats)

print("Forest:",Habitats["forest"])

Habitats.pop("desert")

print("Completed Dictionary", Habitats)

print("Habitats:",Habitats.keys())
print("All Animals:",Habitats.values())
