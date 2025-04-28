# Given list
my_list = [1, 2, 3, 4, 5, 1, 2, 3]

# Converting list to tuple
my_tuple = tuple(my_list)
print("Tuple:", my_tuple)

# Converting list to set (removes duplicates)
my_set = set(my_list)
print("Set:", my_set)


'''
--------------------output--------------------
Tuple: (1, 2, 3, 4, 5, 1, 2, 3)
Set: {1, 2, 3, 4, 5}
'''





# Given tuple
my_tuple = (4, 5, 6, 7, 8, 4, 5, 6)

# Conveting tuple into list
my_list = list(my_tuple)
print("List:", my_list)

# Converting tuple into set (removes duplicates)
my_set = set(my_tuple)
print("Set:", my_set)



'''
--------------------output--------------------
List: [4, 5, 6, 7, 8, 4, 5, 6]
Set: {4, 5, 6, 7, 8}
'''





# Given set
my_set = {11, 12, 13, 14, 15}

# Conveting set into list
my_list = list(my_set)
print("List:", my_list)

# Converting set into tuple 
my_tuple = tuple(my_set)
print("Tuple:", my_tuple)


'''
--------------------output--------------------
List: [11, 12, 13, 14, 15]
Tuple: (11, 12, 13, 14, 15)
'''


n=11

for i in range(n):
    for j in range(n):
        print(i*j)    
        
