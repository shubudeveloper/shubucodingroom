'''
1. Arithmetic Operators (+,-,*,/,%,**)
2. Relational/Comparison Operators (==,!=,>,<,>=,<=)
3. Assignment Operators (=,+=,-=,*=,/=,%=,**=)
4. Logical Operators (not,and,or)

'''

'''relation operators'''

a = 10
b = 20

print(a==b)
print(a!=b)
print(a>b)
print(a<b)
print(a>=b)
print(a<=b)

'''
False
True
False
True
False
True

'''

'''assignment operators'''

num = 10
num += 10

print("The value of num is",num)

'''
----------output----------
The value of num is 20

'''

'''logical operators'''

c = 13
d = 42

print(not (c>d))  ## True
print("AND OPERATOR:",c and d)
print("OR OPERATOR:",(a==b) or (a<b))

'''
----------output----------
True
AND OPERATOR: 42
OR OPERATOR: True

'''