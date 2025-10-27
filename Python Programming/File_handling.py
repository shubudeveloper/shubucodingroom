with open('large_input.txt','r') as f:
    lines = f.readlines()
    
print(lines)
for line in lines:
    line="".join(line)
    line=line.split()
    #print(line)

    for word in line:
        if word.isalnum():
            line.remove(word)

    #print(line)
    alphanum=[]
    alphabet=[]
    for word in line:
        if word.isalpha():
            alphabet.append(word)
        if word.isalnum():
            alphanum.append(word)

    sorted(alphabet,key=str.lower)
    sorted(alphanum,key=str.lower)


    merged = alphabet + alphanum
    merged.append(str(len(merged)))


    with open('output.txt','a+') as file:
        for data in merged:
            file.write(data+" ")
        file.write("\n")

print("=============Program Executed Succesfully==============")