# Завдання 1

# nums = input("Введіть список чисел через пробіл: ").split()
# even = 0
# odd = 0
# for n in nums:
#     num = int(n)
#     if num % 2 == 0:
#         even += 1
#     else:
#         odd += 1
# print("Парних чисел:", even)
# print("Непарних чисел:", odd)

# Завдання 2 

# nums = input("Введіть список чисел через пробіл: ").split()
# min_num = int(nums[0])
# max_num = int(nums[0])
# for n in nums:
#     num = int(n)
#     if num < min_num:
#         min_num = num
#     if num > max_num:
#         max_num = num
# print("Мінімальне:", min_num)
# print("Максимальне:", max_num)

# Завдання 3

# nums = input("Введіть список чисел (випадкові): ").split()
# min_positive = None
# max_negative = None
# pos_count = 0
# neg_count = 0
# zero_count = 0
# for n in nums:
#     num = int(n)
#     if num > 0:
#         pos_count += 1
#         if min_positive is None or num < min_positive:
#             min_positive = num
#     elif num < 0:
#         neg_count += 1
#         if max_negative is None or num > max_negative:
#             max_negative = num
#     else:
#         zero_count += 1
# print("Мінімальний додатній:", min_positive)
# print("Максимальний від'ємний:", max_negative)
# print("Кількість додатних:", pos_count)
# print("Кількість від'ємних:", neg_count)
# print("Кількість нулів:", zero_count)

# Завдання 4 

# nums = input("Введіть список чисел: ").split()
# threshold = int(input("Введіть граничне число: "))
# filtered = []
# for n in nums:
#     if int(n) >= threshold:
#         filtered.append(n)
# print("Результат:", " ".join(filtered))

# Завдання 5 

# expr = input("Введіть арифметичний вираз (наприклад, 23+12): ")
# a = ""
# b = ""
# op = ""
# found = False
# for ch in expr:
#     if ch in "+-*/" and not found:
#         op = ch
#         found = True
#     elif not found:
#         a += ch
#     else:
#         b += ch
# if op == "+":
#     print("Результат:", int(a) + int(b))
# elif op == "-":
#     print("Результат:", int(a) - int(b))
# elif op == "*":
#     print("Результат:", int(a) * int(b))
# elif op == "/":
#     if int(b) == 0:
#         print("Ділення на нуль неможливе!")
#     else:
#         print("Результат:", int(a) / int(b))

# Завдання 6 

# nums = input("Введіть список чисел: ").split()
# numbers = []
# positions = []
# for i in range(len(nums)):
#     n = int(nums[i])
#     if n >= 0:
#         numbers.append(n)
#         positions.append(i)
# numbers.sort()
# j = 0
# for i in range(len(nums)):
#     if int(nums[i]) >= 0:
#         nums[i] = str(numbers[j])
#         j += 1
# print("Відсортований список:", " ".join(nums))
