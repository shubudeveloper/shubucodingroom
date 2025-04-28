# Write a Python program that prints numbers from 1 to 10 using a for loop

for i in range(1,11):
    print(i, end=" ")
print()


'''
--------------------output--------------------
1 2 3 4 5 6 7 8 9 10 
'''





# Write a Python program to calculate the sum of all numbers from 1 to 100 using a for loop.

sum = 0
for i in range(1,101):
    sum = sum + i
print("sum =",sum)


'''
--------------------output--------------------
sum = 5050
'''





# Write a Python program to print all even numbers between 1 and 20 using a for loop.

for i in range(2,20,2):
    print(i, end=" ")
print()


'''
--------------------output--------------------
2 4 6 8 10 12 14 16 18
'''





# Write a Python program to print the multiplication table of a given number using a for loop.

i = int(input("Enter the value of i for which you want to print table:-"))
for j in range(1,11):
    print(i,"*",j,"=",i*j)


'''
--------------------output--------------------
Enter the value of i for which you want to print table:-5
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





# Write a Python program that takes a list of numbers and prints the square of each number using a for loop.

a = [1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10]
for i in a:
    print(i**2)
    i+=1


'''
--------------------output--------------------
1
4
9
16
25
36
49
49
64
81
100
'''