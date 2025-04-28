# Write a Python program that prints numbers from 1 to 10 using a while loop.

a = 1
while a<=10:
    print(a, end=" ")
    a+=1


'''
--------------------output--------------------
1 2 3 4 5 6 7 8 9 10 
'''





# Write a Python program to calculate the sum of all numbers from 1 to 100 using a while loop.

a = 1
sum = 0
while a<=100:
    for a in range(1,101):
        sum = sum + a
        a+=1
    print("sum =",sum)


'''
--------------------output--------------------
sum = 5050
'''





# Write a Python program to print all odd numbers between 1 and 20 using a while loop.

a = 1
while a<=17:
    a = a + 2
    print(a)

'''
--------------------output--------------------
3
5
7
9
11
13
15
17
19
'''





# Write a Python program that keeps asking the user to enter a positive number until they enter a negative number.

number = 0
while number>=0:
    number = float(input("Enter the positive value (or, a negative value to stop):-"))

    if number>=0:
        print("Entered number =",number)
        
print("Negative number entered. Existing.")


'''
--------------------output--------------------
Enter the positive value (or, a negative value to stop):-50
Entered number = 50.0
Enter the positive value (or, a negative value to stop):-40
Entered number = 40.0
Enter the positive value (or, a negative value to stop):-60
Entered number = 60.0
Enter the positive value (or, a negative value to stop):-79
Entered number = 79.0
Enter the positive value (or, a negative value to stop):--4
Negative number entered. Existing.
'''





# Write a Python program to find the factorial of a given number using a while loop.

number = int(input("Enter the value of a:-"))
result = 1
while number>0:
    result*=number
    number-=1
print("Factorial =",result)


'''
--------------------output--------------------
Enter the positive value of a:-5
Factorial = 120
'''