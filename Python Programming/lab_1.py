# Write a program to print your name.
print("Shubham Kumar")
print()


# Write a program that declares two variables, adds them, and stores the result in another variable. Print the result using a single line statement.
a = 81
b = 77
sum = a+b
print(sum)
print()

a = 50
print("a =", a)
print(type(a))
print()


# Write a Python program to take your name and age as input and print them using the print() function.
name = input("Enter your name:")
age = int(input("Enter your age:"))
print("My name is", name, "and age is", age, ".")
print()


# Take two numbers as input from the user and display their sum, difference, product, and quotient. 
num_1 = int(input("Enter the value of num_1:"))
num_2 = int(input("Enter the value of num_2:"))
print(f"sum = {num_1+num_2}")
print(f"difference = {num_1-num_2}")
print(f"product = {num_1*num_2}")
print(f"quotient = {num_1/num_2}")
print()


# Write a program to read a string and an integer from the user and print them using formatted output (e.g., f-strings or format()).
x = input("Enter your string:")
y = int(input("Enter your integer value:"))
print(f"string = {x}")
print(f"integer = {y}.")
print()


# Write a Python code using at least 3 different valid identifiers, assign them values, and print their values.
value1 = 10
myRoll = 22
_my_marks = 81
print(f"Value1 = {value1}")
print(f"My Roll = {myRoll}")
print(f"My Marks = {_my_marks}")
print()


# Write an expression to calculate the area of a rectangle using user-input length and breadth. 
length = float(input("Enter the length of a ractangle:"))
breadth = float(input("Enter the breadth of a rectangle:"))
area = length*breadth
print(f"The area of a rectangle is {area} square metre.")
print()


# Take input of your name, age, and height from the user. Display each value along with its data type using the type() function.
my_name = input("Enter your name:")
my_age = int(input("Enter your age:"))
my_height = int(input("Enter your height:"))
print(my_name)
print(type(my_name))
print(my_age)
print(type(my_age))
print(my_height)
print(type(my_height))
print()


# Write a program to demonstrate implicit and explicit type conversion in Python.
num1 = 10
num2 = 7.5
sum1 = num1 + num2
print(f"Impicitly converted value = {sum1}")

num3 = 20
num4 = 8.5
num5 = int(num4)
sum2 = num3 + num5
print(f"Explicitly converted value = {sum2}")
print()


#  Create a program that asks for two float numbers from the user and prints their average.
value_1 = float(input("Enter the 1st float number:"))
value_2 = float(input("Enter the 2nd float number:"))
average = (value_1 + value_2)/2
print(f"The average of two float numbers are {average}")
print()


#  Evaluate the expression 10 + 5 * 2 // 3 in Python. Show the output .
a = 10
b = 5
c = 2
d = 3
solution = (a + b * 2 // 3)
print(solution)
print()


# Write a program to take four numbers a, b, c, and d from the user and compute the value of (a + b) * c / d. Ensure correct use of parentheses.
a = int(input("Enter your 1st number:"))
b = int(input("Enter your 2nd number:"))
c = float(input("Enter your 3rd number:"))
d = float(input("Enter your 4th number:"))
solution = ((a + b) * c / d)
print(solution)
print()


#  Demonstrate the difference between == and = in Python with a small example program.

# use of = (assignment operator)
x = 5
y = 3
print(f"sum = {x + y}")

# use of == (comparison opeeator)
age = 50
if age >= 18:
    print("A person is eligible for giving vote.")
else:
    print("A person is not eligible for giving vote.")
print()


# Write a program using an if statement with incorrect indentation.And then correct it
number = int(input("Enter your number : "))
print(f"Entered number is {number}")

# if number % 2 == 0:
# print(f"{number} is even.")
# if number % 2 != 0:
# print(f"{number} is odd.")

if number % 2 == 0:
    print(f"{number} is even.")
if number % 2 != 0:
    print(f"{number} is odd.")
print()


# Create a nested if-else structure (e.g., grading system) and write it with proper indentation.
marks = int(input("Enter your marks : "))

if marks >= 90:
    print("grade : A+")
elif marks >= 80:
    print("grade : A")
elif marks >= 70:
    print("grade : B")
elif marks >= 60:
    print("grade : C")
elif marks >= 50:
    print("grade : D")
elif marks >= 40:
    print("grade : P")
elif marks >= 0:
    print("grade : F")
else:
    print("Invalid marks entered.")
print()
    

# Add meaningful comments to a program that calculates the square and cube of a number entered by the user.
a = int(input("enter a number : ")) # takes an integer from user
print(f"square of {a} is {a**2}") # prints square of a
print(f"cube of {a} is {a**3}") # prints cube of a
