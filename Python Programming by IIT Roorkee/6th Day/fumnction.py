def addition(n1,n2):
    a = n1 + n2
    print("Addition of two numbers =",a)
addition(2,3)





add_1 = lambda a1,a2,a3:a1+a2+a3
print(add_1(12,23,34))





def add_2(*args):
    print(sum(args))
print(add_2(12,23,34,45,56,67,78,89,90))





def details(**kwargs):
    print(kwargs)
print(details(name="Shubham Kumar", age="23", address="Bihar"))





