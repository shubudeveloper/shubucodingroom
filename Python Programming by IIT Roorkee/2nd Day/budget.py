budget=int(input("Enter the your budget:-"))

if budget>=1000000:
    print("You can visit Gremany.")

elif budget>500000 and budget<1000000:
    print("You can visit American country.")

elif budget>1000000 and budget<5000000:
    print("You can  visit Dubai.")

elif budget>50000 and budget<100000:
    print("You can visit Goa.")

elif budget>10000 and budget<50000:
    print("You can visit .")

elif budget>5000 and budget<10000:
    print("You can visit Rajgir,Nalanda,Patna.")

elif budget>500 and budget<1000:
    print("You can visit own city.")

else:
   print("You can stay at your home.20")





'''
--------------------output--------------------
Enter the your budget:-234567899
You can visit Gremany.
'''