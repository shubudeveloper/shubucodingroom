print("Hello")

n=0
n=int(input("Enter the number of disks "))

total_moves=2**n - 1
print(f"Total No of moves required for {n} disks is {total_moves}")

present_move = 1

while present_move<=total_moves:
  remaining_moves = total_moves - present_move
  print(f"Move {present_move} / remaining {remaining_moves}")
  if present_move%5==0:
    print("Checkpoint Reached ! ")
  present_move =  present_move+1
  if present_move>50:
    print("This will take too long to solve!")
    break





study_hours = []
for i in range(0,15):
  hour=int(input(f"Enter the study hour for day {i+1}  in range (0 to 24)   "))
  while(hour>24 or hour<0):
    hour=int(input(f"Enter the study hour for day {i+1}  in range (0 to 24)  "))

  study_hours.append(hour)

print(f"Study_hours - {study_hours}")
total_hour = sum(study_hours)
print(f"Total Study Hour : {total_hour}")
average_hour= total_hour/len(study_hours)
print(f"Average Study Hour : {average_hour}")
max_hour=max(study_hours)
max_study_day= study_hours.index(max_hour) + 1
print(f"Maximum Study on day  : {max_study_day}")
less_study=0
for i in study_hours:
  if i<4:
    less_study+=1
print(f"Days Study less than 4 hours  : {less_study}")
new_list=[]
for i in study_hours:
  new_list.append(i*60)
print(new_list)





def check_prime(num):
  flag=0
  for i in range(2,num//2):
    flag=1
    if (num%i == 0):
      flag=0
      break
  return flag

flag=1
while(flag):
  usr = int(input("Enter a number   "))
  if (check_prime(usr)):
    flag=0
    print("Prime number entered the loop")





string=input("Enter a string ")
len=0
for char in string:
  len+=1

print(f"The length of string is {len}")

num=int(input("Enter a  number "))
rev=0
while(num!=0):
  rem=num%10
  rev=rev*10+rem
  num=num//10
print(rev)





tries=0
while(tries<3):
  pwd=input("Enter the password  ")
  if pwd!='khulja sim sim':
    tries+=1
  else:
    break
  if tries==3:
    print("Access Denied ")


