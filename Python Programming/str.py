str_1 = "My name is Shubham Kumar."
str_2 = "B. P. Mandal College of Engineering, Madhepura."

print(str_1)
print(str_2)


'''
----------output----------
My name is Shubham Kumar.
B. P. Mandal College of Engineering, Madhepura.

'''

str_3 = "Shubham"
str_4 = "Kumar"

finalStr = str_3 + " " + str_4
print(finalStr)
print(len(finalStr))

ch = str_3[0]
print(ch)
print(str_3[2:5])


'''
----------output----------
Shubham Kumar
13
S
ubh

'''


str_5 = "i am learning python programming"
print(str_5.endswith("ing"))
print(str_5.capitalize())
print(str_5.replace("o","a"))
print(str_5.replace("python","java"))
print(str_5.find("o"))
print(str_5.count("python"))


'''
----------output----------
True
I am learning python programming
i am learning pythan pragramming
i am learning java programming
18
1

'''


str_6 = str(input("Enter your first name:"))
print(str_6)
print("Lenght of the character is", len(str_6))
print("Occurence of h is", str_6.count("h"), "times")

'''
----------output----------
Enter your first name:Shubham
Shubham
Lenght of the character is 7
Occurence of h is 2 times

'''