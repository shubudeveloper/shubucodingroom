sports = ["Cricket" , "Short Put Throw" , "Tug Of War" , "Racecar" , "Vollyball" , "Badminton" , "Carrom" , "Chess" , "Sudoku"]

def count_sports(lst):
    if lst == []:
        return 0
    return 1 + count_sports(lst[1:])

def search_sport(lst , name):
    if lst==[]:
        return False
    if lst[0].lower() == name.lower():
        return True
    return search_sport(lst[1:] , name)

def find_min_index(lst ,start = 0 ,min_index=0 , i=0):
    if i==len(lst):
        return min_index
    if lst[i].lower() < lst[min_index].lower():
        min_index=i
    return find_min_index(lst , start , min_index , i+1)
    

def sort_sports(lst , i=0):
    if i==len(lst):
        return lst
    min_index = find_min_index(lst , i , i , i)
    lst[i] , lst[min_index] = lst[min_index] , lst[i]
    return sort_sports(lst , i+1)

def is_palindrome(word):
    word = word.lower().replace(" ","")
    if len(word) <=1:
        return True
    if(word[0] != word[-1]):
        return False
    return is_palindrome(word[1:-1])
    
    
def celebration_summary(lst):
    print("National sports day celebration reports")
    total = count_sports(lst)
    print(f"Total sports celebrated : {total}\n")
    
    name = input("Enter a sports name to search: ")
    found = search_sport(lst , name)
    print(f"Was '{name}' celebrated? {'yes' if found else 'No'}\n")

    sorted_list = sort_sports(lst[:])
    print("Sports (Alphabetically Sorted):")
    for s in sorted_list:
        print("-" , s)
    print()

    print("Palindrome sports Names :")
    palindromes = [s for s in lst if is_palindrome(s)]
    if palindromes:
        for p in palindromes:
            print("-" , p)
    else:
        print("No palindrome sports found")



celebration_summary(sports)