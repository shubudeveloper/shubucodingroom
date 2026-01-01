import numpy as np



# Create a numpy array with values from 1 to 10
arr1 = np.array([1,2,3,5,6,7,8,9,10])
print(f"created array is {arr1}")
print()



# Create an array of zeros and ones with length 5
zeros_arr = np.zeros(5)
ones_arr = np.ones(5)
print(f"zeros array: {zeros_arr}")
print(f"ones array: {ones_arr}")
print()



# Create an array of even numbers from 2 to 20
even_arr = np.arange(2, 21, 2)
print(f"even numbers array from 2 to 20: {even_arr}")
print()



# Convert the list [3, 6, 9, 12] into a NumPy array.
list_to_convert = [3, 6, 9, 12]
converted_arr = np.array(list_to_convert)
print(f"converted array: {converted_arr}")
print()



# Create a 3×3 identity matrix.
identity_matrix = np.eye(3)
print(f"3x3 identity matrix:\n{identity_matrix}")
print()



# Generate an array of 10 random integers between 1 and 50.
random_integers = np.random.randint(1, 51, size=10)
print(f"array of 10 random integers between 1 and 50: {random_integers}")
print()



# Find the shape, size, and data type of:  a = np.array([[1, 2, 3], [4, 5, 6]])
a = np.array([[1, 2, 3], [4, 5, 6]])
shape = a.shape
size = a.size
data_type = a.dtype
print(f"array a:\n{a}")
print(f"shape: {shape}, size: {size}, data type: {data_type}")
print()



# Create a 4×4 matrix and print the first row, last column, and the element at position (2,3).
matrix_4x4 = np.array([[1, 2, 3, 4],
                        [5, 6, 7, 8],
                        [9, 10, 11, 12],
                        [13, 14, 15, 16]])
first_row = matrix_4x4[0, :]
last_column = matrix_4x4[:, -1]
print(f"4x4 matrix:\n{matrix_4x4}")
print(f"first row: {first_row}")
print(f"last column: {last_column}")
print()



# Create two arrays and perform element-wise addition, subtraction, multiplication, and division.
first_arr = np.array([10, 20, 30])
second_arr = np.array([1, 2, 3])
addition = first_arr + second_arr
subtraction = first_arr - second_arr
multiplication = first_arr * second_arr
division = first_arr / second_arr
print(f"first array: {first_arr}")
print(f"second array: {second_arr}")
print(f"addition: {addition}")
print(f"subtraction: {subtraction}")
print(f"multiplication: {multiplication}")
print(f"division: {division}")
print()



# Create an array and find its mean, median, and standard deviation.
arr = np.array([10, 20, 30])
mean = np.mean(arr)
median = np.median(arr)
std_dev = np.std(arr)
print(f"array: {arr}")
print(f"mean: {mean}, median: {median}, standard deviation: {std_dev}")
print()



# Reshape a 1D array of 12 elements into:
'''
    ● 3*4
    ● 4*3
    ● 2*6
'''
array_1d = np.arange(12)
reshaped_3x4 = array_1d.reshape(3, 4)
reshaped_4x3 = array_1d.reshape(4, 3)
reshaped_2x6 = array_1d.reshape(2, 6)
print(f"original 1D array: {array_1d}")
print(f"reshaped to 3x4:\n{reshaped_3x4}")
print(f"reshaped to 4x3:\n{reshaped_4x3}")
print(f"reshaped to 2x6:\n{reshaped_2x6}")
print()



# Stack the arrays vertically and horizontally:  a = np.array([1, 2, 3])  b = np.array([4, 5, 6])
a = np.array([1, 2, 3])
b = np.array([4, 5, 6])
vertical_stack = np.vstack((a, b))
horizontal_stack = np.hstack((a, b))
print(f"array a: {a}")
print(f"array b: {b}")
print(f"vertical stack:\n{vertical_stack}")
print(f"horizontal stack: {horizontal_stack}")
print()



# Given: x = np.array([10, 20, 30, 40, 50])  Replace 30 with 300.
x = np.array([10, 20, 30, 40, 50])
x[x == 30] = 300
print(f"modified array x: {x}")
print()



# Create a random 5×5 array and find the maximum value, minimum value, and their indices (argmax,argmin).
random_5x5 = np.random.rand(5, 5)
max_value = np.max(random_5x5)
min_value = np.min(random_5x5)
argmax_index = np.unravel_index(np.argmax(random_5x5), random_5x5.shape)
argmin_index = np.unravel_index(np.argmin(random_5x5), random_5x5.shape)
print(f"random 5x5 array:\n{random_5x5}")
print(f"maximum value: {max_value} at index {argmax_index}")
print(f"minimum value: {min_value} at index {argmin_index}")
print()



# Create two 3×3 matrices and compute their matrix multiplication using np.dot() or the @ operator.
matrix1 = np.array([[1, 2, 3],
                     [4, 5, 6],
                     [7, 8, 9]])
matrix2 = np.array([[9, 8, 7],
                     [6, 5, 4],
                     [3, 2, 1]])
matrix_multiplication = np.dot(matrix1, matrix2)
print(f"matrix 1:\n{matrix1}")
print(f"matrix 2:\n{matrix2}")
print(f"matrix multiplication result:\n{matrix_multiplication}")
print()



# Given a 5×5 matrix, extract the main diagonal and anti-diagonal.
matrix_5x5 = np.array([[1, 2, 3, 4, 5],
                         [6, 7, 8, 9, 10],
                         [11, 12, 13, 14, 15],
                         [16, 17, 18, 19, 20],
                         [21, 22, 23, 24, 25]])
main_diagonal = np.diagonal(matrix_5x5)
anti_diagonal = np.fliplr(matrix_5x5).diagonal()
print(f"5x5 matrix:\n{matrix_5x5}")
print(f"main diagonal: {main_diagonal}")
print(f"anti-diagonal: {anti_diagonal}")
print()



# Normalize an array so all values lie between 0 and 1.
array_to_normalize = np.array([10, 20, 30, 40, 50])
normalized_array = (array_to_normalize - np.min(array_to_normalize)) / (np.max(array_to_normalize) - np.min(array_to_normalize))
print(f"original array: {array_to_normalize}")
print(f"normalized array: {normalized_array}")
print()



# Create a 6×6 matrix and replace all border elements with 0.
matrix_6x6 = np.random.randint(1, 100, size=(6, 6))
matrix_6x6[0, :] = 0
matrix_6x6[-1, :] = 0
matrix_6x6[:, 0] = 0
matrix_6x6[:, -1] = 0
print(f"6x6 matrix with border elements replaced by 0:\n{matrix_6x6}")
print()



# Given an array of random numbers, sort it in ascending and descending order.
random_array = np.random.rand(10)
sorted_ascending = np.sort(random_array)
sorted_descending = np.sort(random_array)[::-1]
print(f"original random array: {random_array}")
print(f"sorted in ascending order: {sorted_ascending}")
print(f"sorted in descending order: {sorted_descending}")
print()



# For the array: arr = np.array([1,2,3,4,5,6,7,8,9])
''''
    Reshape it to 3×3 and find:
    ● Row-wise sum
    ● Column-wise sum
    ● Transpose
'''
arr = np.array([1,2,3,4,5,6,7,8,9])
reshaped_arr = arr.reshape(3, 3)
row_wise_sum = np.sum(reshaped_arr, axis=1)
column_wise_sum = np.sum(reshaped_arr, axis=0)
transpose_arr = reshaped_arr.T
print(f"original array: {arr}")
print(f"reshaped to 3x3:\n{reshaped_arr}")
print(f"row-wise sum: {row_wise_sum}")
print(f"column-wise sum: {column_wise_sum}")
print(f"transpose:\n{transpose_arr}")
print()