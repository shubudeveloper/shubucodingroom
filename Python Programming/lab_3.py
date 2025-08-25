# 1.Take a string input and print the first and last characters.
string = input("Enter your string: ")
first_character = string[0]
last_character = string[-1]
print(f"Your entered string is {string}.")
print(f"First_character = {first_character}")
print(f"Last_character = {last_character}")



# 2. Ask the user to enter a string. If it contains the word "Python", print "Found", else print "Not Found".
string = input("Enter your string: ")
word = "python"
if string in word:
    print("Found")
else:
    print("Not Found")



# 3. Input a string and check if its length is greater than 10.
string = input("Enter your string: ")
if len(string) > 10:
    print("The length of string is greater than 10.")
    print(f"My entered string is {string}.")
else:
   print("The length of string is less than 10.") 



# 4. Ask the user to input two strings. Print the one that comes first in dictionary order.
string1 = input("Enter your 1st string: ")
string2 = input("Enter your 2nd string: ")
print(f"My entered 1st string is {string1}.")
print(f"My entered 2nd string is {string2}.")
if string1<string2:
    print(string1)
else:
    print(string2)



# 5. Given a string, check whether it starts with a capital letter.
string = input("Enter your string: ")
print(f"Entered string is {string}.")
print()
if string[0].isupper():
    print("String starts with capital letter.")
else:
    print("String starts with small letter.")



# 6. Create a list of 3 predefined numbers. Use max() to find the largest and print it.
list = []
for i in range(1,4):
    num = int(input("Enter number : "))
    list.append(num)
print(f"Created list = {list}")
print(f"Largest number in list = {max(list)}")



# 8. Given a list like [10, 20, 30], check whether 25 is in the list or not
list = [10, 20, 30]
num = 25
print(f"List = {list}")
print(f"Given number to be checked = {num}")
if num in list:
    print("Number is present in the list.")
else:
    print("Number is not present in the list.")



# 9. Take a list of names and print "Valid" if "John" is in the list, otherwise print "Invalid".
list = []
s_name = "john"
for i in range(1,4):
    name = input("Enter number : ")
    list.append(name)
print(f"Created list = {list}")
if s_name in list:
    print("Valid")
else:
    print("Invalid")



# 10. Ask user to enter three marks, store them in a list, and print "Pass" if all are ≥ 40, otherwise "Fail".
list = []
for i in range(1,4):
    marks = int(input("Enter your marks : "))
    list.append(marks)
print(f"Created list of marks = {list}")
if list[0]>=40 and list[1]>40 and list[2]>=40:
    print("Pass")
else:
    print("Fail")



# 11. Define a tuple (5, 10, 15) and check if 10 is present in it using if.
my_tuple = (5, 10, 15)
num = 10
if num in my_tuple:
    print("10 is present int the tuple.")
else:
    print("Not preent")



# 12. 