# 1. Ask the user to input a string and a character; if the character exists in the string and is avowel, print "Valid vowel found", else print "Invalid".

my_string = input("Enter your string: ")
my_char = input("Enter your character: ")

vowel = "aeiouAEIOU"

if my_char in vowel and my_char in my_string:
    print("Valid vowel found")
else:
    print("Ivalid")



# 2. Create a list of 3 numbers entered by the user; if the sum of the first and last numbers is greater than the middle one, print "Condition Met", else print "Try Again".

list = []
for i in range(3):
    num = int(input(f"Enter  number {i+1}: "))
    list.append(num)
print(list)

if list[0] + list[2] > list[1]:
    print("condition met")
else:
    print("Try Again")



# 3. Ask the user to input two names and store them in a tuple; if both names start with the same letter, print "Same Start", otherwise "Different Start".

name_1 = input("Enter first name: ")
name_2 = input("Enter second name: ")
name_tuple = (name_1, name_2)
if name_tuple[0][1].lower() == name_tuple[1][0].lower():
    print("Same Start")
else:
    print("Different Start")



# 4. Take a name input and store it in a dictionary under key 'name'; if the length of the name is less than 5, print "Short Name", else print "Long Name".

name = input("Enter your name: ")
name_dict = {"Name: " + name}
print(name_dict)

if len(name) <5:
    print("Short name")
else:
    print("Long name")



# 5. Create a set of 3 elements from user input; if the set contains more than 2 elements and includes the number 10, print "Special Set".

set_elements = set()
for i in range(3):
    element = int(input("Enter element {i+1}: "))
    set_elements.add(element)
print(set_elements)

if len(set_elements) > 2 and 10 in set_elements:
    print("Special set")
else:
    print("Not a special set")



# 6. Input 3 numbers, store them in a list, and then convert to a tuple; if all three numbers are distinct, print "All Unique", else "Duplicates Found".
list = []
for  i in range(3):
    element = int(input("Enter element {i+1}: "))
    list.append(element)
print("List: ", list)

tuple_elements = tuple(list)
print("Converted  into tuple: ", tuple_elements)

if len(list) == len(tuple_elements):
    print("All numbers are distinct")
else:
    print("Numbers are not distinct")



# 7. Create a dictionary with subject names as keys and marks as values; if the student failed in any subject (marks < 40), print "Fail", otherwise "Pass".

student = {"Chemistry":"89", "Programming for Problem Solving":"54", "Operating System":"81", "Technical writing":"73", "Discrete Mathematics":"52"}

if any(int(marks) < 40 for marks in student.values()):
    print("Fail")
else:
    print("Pass")



# 8. Take two strings as input and store both in a list; if one string is a substring of the other, print "Substring found", else "No Match".

str_1 = input("Enter your 1st string: ")
str_2 = input("Enter your 2nd string: ")

string = [str_1, str_2]

if string[0] in string[1] or string[1] in string[0]:
    print("Substring found")
else:
    print("No Match")



# 9. Ask the user to enter a sentence and convert it into a set of characters; if the set contains both 'a' and 'z', print "A to Z", else "Missing letters".

sentence = input("Enter a sentence: ")

char_set = set(sentence.lower())   # lower() → case-insensitive

# check if both 'a' and 'z' are present
if 'a' in char_set and 'z' in char_set:
    print("A to Z")
else:
    print("Missing letters")



# 10. Take two integer inputs from the user and form a tuple; check if the sum is even and both numbers are greater than 10, if so, print "Conditions Met", else print "Conditions Failed".

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

numbers = (num1, num2)
print("Tuple:", numbers)

# check conditions: sum is even and both > 10
if (sum(numbers) % 2 == 0) and (numbers[0] > 10 and numbers[1] > 10):
    print("Conditions Met")
else:
    print("Conditions Failed")

