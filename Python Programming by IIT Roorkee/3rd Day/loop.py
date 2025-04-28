# Loop
# for loop
# while loop


l1 = [12, 23, 34, "Shubham", "Sumit"]
for i in l1:
    print(l1)


'''
--------------------output--------------------
'''





for i in l1:
    if i==12:
        continue
    print(i)


'''
--------------------output--------------------
'''





'''
range syntax

(starting_value, end_value+1)

(starting_value, end_value-1, step)
'''





for i in range(0,100,2):
    print(i)


'''
--------------------output--------------------'
'''





for i in range(1,100,2):
    print(i)


'''
--------------------output--------------------
'''





for i in range(1,100):
    if i%2==0:
        print(i)

'''
--------------------output--------------------
'''