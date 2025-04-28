def sum():
    num1 = int(input("Enter the 1st number:-"))
    num2 = int(input("Enter the 2nd number:-"))
    sum = num1 + num2
    print("Sum =",sum)
sum()


'''
--------------------output--------------------
Enter the 1st number:-3
Enter the 2nd number:-4
Sum = 7
'''




def details():
    name = "Shubham"
    age = 24
    address = "Bihar"
    print(f"My name is {name} My age is {age} My address is {address}")
details()


'''
--------------------output--------------------
My name is Shubham My age is 24 My address is Bihar
'''





def greet():
    name = str(input("Eenter your name:-"))
    print("Welcome !",name)
greet()


'''
--------------------output--------------------
Eenter your name:-Raj
Welcome ! Raj'
'''





def table():
    num = int(input("Enter your table number:-"))
    a = 1
    while a<=10:
        print(num,"*",a,"=",num*a)
        a+=1
print()
table()


'''
--------------------output--------------------
Enter your table number:-5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
'''





def name():
    for i in range(1,11):
        print("Shubham Kumar")
name()


'''
--------------------output--------------------
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
Shubham Kumar
'''





def num():
    a = int(input("Enter the value of a:-")) 
    b = int(input("Enter the value of b:-"))
    sum = 0
    for i in range(a,b):
        sum = sum + i
        print(i)
    print("Sum =",sum)
num()


'''
--------------------output--------------------
Enter the value of a:-4
Enter the value of b:-9
4
5
6
7
8
Sum = 30
'''





