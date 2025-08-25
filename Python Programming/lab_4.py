# Write a for loop to print all numbers between 1 and 100 that are divisible by both 3 and 5.
print("Numbers between 1 to 100 divisible by both 3 and 5:")
for i in range(2,100):
    if i%3==0 and i%5==0:
        print(i)



# Given the list numbers = [12, 45, 23, 67, 34, 89, 2], use a for loop to find and print the largest number without using max(). 
numbers = [12, 45, 23, 67, 34, 89, 2]
print(f"Given list: {numbers}")
largest = numbers[0]
for num in numbers:
    if num > largest:
        largest = num
print(f"Largest number: {largest}")



# Write a program to reverse a string using a for loop without using slicing ([::-1])
string = input("Enter your string: ")
print(f"Entered string: {string}")
reverse=" "
for str in string:
    reverse = str + reverse
print(f"Reversed string: {reverse}")



# Given a list of integers, use a for loop to create a new list containing only the unique elements (without using set()). 
list = []
for i in range(5):
    num = input(f"Enter inter value {i}: ")
    list.append(num)
if list[0]!=list[1] and list[1]!=list[2] and list[2]!=list[3] and list[3]!=list[4] and list[4]!=list[0]:
    print(f"Created list: {list}")
else:
    print("Please, enter unique number.")



# Write a for loop to check whether a given string is a palindrome (same forward and backward).
string = "madam"
reverse = string[::-1]
if string==reverse:
    print("Palindrome")
else:
    print("Not Palindrome")



''' 
You are given two lists:

    names = ["Alice", "Bob", "Charlie"]
    scores = [85, 92, 78]
    Use a for loop to print the name of the student who scored the highest marks.
'''
names = ["Alice", "Bob", "Charlie"]
scores = [85, 92, 78]
highest = scores[0]
index = 0
for i in range(len(scores)):
    if scores[i]>highest:
        highest  = scores[i]
        index = i
print(f"Highest scorè is scored by {names[index]} with score {highest}.")



# Write a for loop to count the frequency of each character in a string (without using collections.Counter).
string = input("Enter your string: ")
frequency = {}
for char in string:
    if char in frequency:
        frequency[char] += 1
    else:
        frequency[char] = 1
print("Character frequency: ", frequency)



# Given a list of numbers, use a for loop to create a new list containing the square of numbers only if the number is odd.
list = []
for i in range(5):
    num = input(f"Enter inter value {i}: ")
    list.append(num)
print(f"Created list: {list}")

squared_odds = []
for num in list:
    if int(num)%2==0:
        continue
    else:
        squared_odds.append((int(num))**2)
print(f"List of squared odd numbers: {squared_odds}")



# Write a program to check whether all elements in a list are unique using a for loop.
list = []
for i in range(5):
    num = input(f"Enter inter value {i}: ")
list.append(num)
unique = True
for i in range(len(list)):
    for j in range(i+1, len(list)):
        if list[i] == list[j]:
            unique = False
            break
    if not unique:
        break
if unique:
    print("All elements are unique.")
else:
    print("There are duplicate elements in the list.")
    


'''
Given a dictionary of student marks:
marks = {"A": 56, "B": 72, "C": 39, "D": 85}
Use a for loop to print the names of students who passed (marks ≥ 40) and failed separately.
'''
marks = {"A": 56, "B": 72, "C": 39, "D": 85}

passed = []
failed = []

for name in marks:
    if marks[name] >= 40:
        passed.append(name)
    else:
        failed.append(name)
print("Students who passed:", passed)
print("Students who failed:", failed)



# Write a program using a while loop to keep asking the user for a number until they enter a prime number. Print the number as  well as "Prime number entered" and stop.
while True:
    num = int(input("Enter a number: "))
    if num <= 1:
        print(f"{num} is not a Prime number, please try again.")
        continue

    i = 2
    is_prime = True
    while i * i <= num:
        if num % i == 0:
            is_prime = False
            break
        i += 1

    if is_prime:
        print(f"{num} is a Prime number entered")
        break
    else:
        print(f"{num} is not a Prime number, please try again.")
       


# Without using len(), use a while loop to count how many characters are in a given string.
text = input("Enter a string: ")

count = 0
i = 0

while text[i:i+1] != "":   # check if character exists
    count += 1
    i += 1

print("Number of characters in the string:", count)



# Write a program using a while loop to reverse a given integer (e.g., 12345 → 54321) without converting it into a string.
num = int(input("Enter an integer: "))

reverse_num = 0

while num > 0:
    digit = num % 10           # get last digit
    reverse_num = reverse_num * 10 + digit  # append digit to reversed number
    num = num // 10            # remove last digit

print("Reversed integer:", reverse_num)



# Use a while loop to keep asking the user for a password until it matches ”Khullja Sim Sim”; Also, limit the attempts to 3 tries — if the user fails, print "Access Denied".
correct_password = "Khullja Sim Sim"
attempts = 0

while attempts < 3:
    password = input("Enter password: ")
    if password == correct_password:
        print("Access Granted")
        break
    else:
        print("Wrong password, try again.")
        attempts += 1

if attempts == 3:
    print("Access Denied")



'''
Write a program using a while loop to check whether a given integer is an
Armstrong number. Determine the number of digits k, then iterate through the
digits to compute the sum of each digit raised to the power k. If the sum equals
the original number, print "Armstrong", otherwise print "Not Armstrong".
Examples: 153 = 1^3 + 5^3 + 3^3 (3 digits), 9474 = 9^4 + 4^4 + 7^4
+ 4^4 (4 digits).
'''
num = int(input("Enter an integer: "))
original_num = num

# Step 1: Count number of digits (k)
k = 0
temp = num
while temp > 0:
    k += 1
    temp //= 10

# Step 2: Compute sum of digits^k
sum_of_powers = 0
temp = num
while temp > 0:
    digit = temp % 10
    sum_of_powers += digit ** k
    temp //= 10

# Step 3: Check Armstrong condition
if sum_of_powers == original_num:
    print("Armstrong")
else:
    print("Not Armstrong")
