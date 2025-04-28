a = 1
while a<=10:
    print(a)
    a = a+1  # or, a+=1


'''
--------------------output--------------------
1
2
3
4
5
6
7
8
9
10
'''





a = 2
while a<=100:
    print(a, end=" ")
    a+=2
print()

'''
--------------------output--------------------
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 '
'''





name = 1
while name<=10:
    print("Shubham Kumar")
    name+=1


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





a = 1
sum = 0
while a<=100:
    if a%2==0:
        sum = sum + a
        print(a, end=" ")
    a+=1
print()
print(sum)


'''
--------------------output--------------------
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 
2550
'''





a = 1
sum = 0
while a<=10:
        sum = sum + a
        print(a, end=" ")
        a+=1
print()
print(sum)


'''
--------------------output--------------------
1 2 3 4 5 6 7 8 9 10  
55
'''





a = 1
sum = 0
while a<=70:
    if a%7==0:
        sum = sum + a
        print(a, end=" ")
    a+=1
print()
print(sum)


'''
--------------------output--------------------
7 14 21 28 35 42 49 56 63 70  
385
'''





a = int(input("Enter your number:-"))
i = 1
while i<=a:
    print(i)
    i+=1  


'''
--------------------output--------------------
1
2
3
4
5
6
7
8
9
10
'''





a = int(input("Enter your number:-"))
i = 0
while a>=i:
    print(a)
    a-=1 


'''
--------------------output--------------------
10
9
8
7
6
5
4
3
2
1
'''


num = int(input("Enter your table number:-"))
a = 1
sum = 0
while a<=10:
    sum = sum + (num*a)
    print(num,"*",a,"=",num*a)
    a+=1
print()
print(sum)


'''
--------------------output--------------------
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

275'
'''