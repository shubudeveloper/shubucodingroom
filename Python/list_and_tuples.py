movies = []

movie1 = input("Enter the 1st movie:")
movie2 = input("Enter the 2nd movie:")
movie3 = input("Enter the 3rd movie:")

movies.append(movie1)
movies.append(movie2)
movies.append(movie3)

print(movies)


list = [1, 2, 1]

copy_list = list.copy()
copy_list.reverse()

if(copy_list == list):
    print("List is palindrome.")
else:
    print("List is not palindrome.")