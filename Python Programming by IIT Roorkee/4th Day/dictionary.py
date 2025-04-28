# Dictionary is a collection of a data key and value pair
# sart with curly bracket {}
# key can not be duplicate
# value can be duplicate


a = {"Name":"Deepak", "Age":"20", "Branch":"CSE"}
print(type(a))
print(a.keys())
print(a.values())
print(a.items())
print(a["Name"])


'''
--------------------output--------------------
<class 'dict'>
dict_keys(['Name', 'Age', 'Branch'])
dict_values(['Deepak', '20', 'CSE'])
dict_items([('Name', 'Deepak'), ('Age', '20'), ('Branch', 'CSE')])
Deepak
'''





a1 = {"Name":["Antu", "Deepak", "Chandan", "Chatur"], "Age":["23", "21", "21", "12"], "Address":["Delhi", "Mummbai", "Kolkata", "Tamilnadu"]}
print(type(a1))
print(a1.keys())
print(a1.values())
print(a1.items())
print(a1["Name"])


'''
--------------------output--------------------
<class 'dict'>
dict_keys(['Name', 'Age', 'Address'])
dict_values([['Antu', 'Deepak', 'Chandan', 'Chatur'], ['23', '21', '21', '12'], ['Delhi', 'Mummbai', 'Kolkata', 'Tamilnadu']])
dict_items([('Name', ['Antu', 'Deepak', 'Chandan', 'Chatur']), ('Age', ['23', '21', '21', '12']), ('Address', ['Delhi', 'Mummbai', 'Kolkata', 'Tamilnadu'])])
['Antu', 'Deepak', 'Chandan', 'Chatur']
'''






for i in a1.keys():
    print(i)



'''
--------------------output--------------------
Name
Age
Address
'''
