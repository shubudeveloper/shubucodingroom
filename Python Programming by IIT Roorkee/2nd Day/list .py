'''
list starts with square brackets []
list is a collection of differents types of data (heterogeneous data)
slicind and indexing is possible in list
list is mutuable data
'''



a=[12,234,12.4,'Akansha',67,'Sujeet']
print(a)
print(a[2])
print(type(a))
print(a[3:7])

a[3]="Shubham"
print(a)

a.append("Rakesh")
print(a)




'''
--------------------output--------------------
[12, 234, 12.4, 'Akansha', 67, 'Sujeet']
12.4
<class 'list'>
['Akansha', 67, 'Sujeet']
[12, 234, 12.4, 'Shubham', 67, 'Sujeet']
[12, 234, 12.4, 'Shubham', 67, 'Sujeet', 'Rakesh']
'''