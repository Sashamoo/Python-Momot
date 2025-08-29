

# Завдання 1

# def task1_sum_range(a, b):
#     if a > b:   
#         a, b = b, a
#     return sum(range(a, b + 1))

# print("Завдання 1:", task1_sum_range(25, 5))   


# Завдання 2

# def task2_product_list(numbers):
#     product = 1
#     for num in numbers:
#         product *= num
#     return product

# print("Завдання 2:", task2_product_list([1, 2, 3, 4, 5]))


# Завдання 3

# def task3_min_list(numbers):
#     return min(numbers)

# print("Завдання 3:", task3_min_list([10, -5, 7, 0, 3]))


# Завдання 4

# def is_prime(n):
#     if n < 2:
#         return False
#     for i in range(2, int(n**0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def task4_count_primes(numbers):
#     return sum(1 for num in numbers if is_prime(num))

# print("Завдання 4:", task4_count_primes([2, 3, 4, 5, 6, 11, 15, 17]))


# Завдання 5

# def task5_remove_number(numbers, value):
#     count = numbers.count(value)
#     while value in numbers:
#         numbers.remove(value)
#     return count

# nums = [1, 2, 3, 2, 4, 2, 5]
# print("Завдання 5:", task5_remove_number(nums, 2), "видалено, новий список:", nums)


# Завдання 6

# def task6_merge_lists(list1, list2):
#     return list1 + list2

# print("Завдання 6:", task6_merge_lists([1, 2, 3], [4, 5, 6]))


# Завдання 7

# def task7_power_list(numbers, power):
#     return [num ** power for num in numbers]

# print("Завдання 7:", task7_power_list([1, 2, 3, 4], 3))
