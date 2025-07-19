test_list = [4, -1, 7, 0, -6, 8, 4, -5]

# Завдання 1

def product_in_range(a, b):
    if a > b:
        a, b = b, a
    result = 1
    for i in range(a, b + 1):
        result *= i
    return result

print(product_in_range(3, 5))

# Завдання 2 

def find_max(lst):
    if not lst:
        return None
    max_value = lst[0]
    for num in lst[1:]:
        if num > max_value:
            max_value = num
    return max_value

print(find_max(test_list))   

# Завдання 3 

def sum_of_list(lst):
    total = 0
    for num in lst:
        total += num
    return total

print(sum_of_list(test_list)) 

# Завдання 4

def count_types(lst):
    even = odd = positive = negative = 0
    for num in lst:
        if num % 2 == 0:
            even += 1
        else:
            odd += 1
        if num > 0:
            positive += 1
        elif num < 0:
            negative += 1
    return {
        'парні': even,
        'непарні': odd,
        'додатні': positive,
        'від’ємні': negative
    }


print(count_types(test_list))  

# Завдання 5

def reverse_list(lst):
    return lst[::-1]

print(reverse_list(test_list))  

# Завдання 6

def factorial(n):
    if n < 0:
        return None
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

def factorial_list(lst):
    return [factorial(num) for num in lst]


print(factorial_list([3, 4, 5])) 

# Завдання 7

def is_fibonacci(n):
    if n < 0:
        return False
    a, b = 0, 1
    while b < n:
        a, b = b, a + b
    return n == b or n == 0

def fibonacci_in_list(lst):
    return [num for num in lst if is_fibonacci(num)]

print(fibonacci_in_list(test_list)) 


