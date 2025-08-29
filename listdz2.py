import random

# Завдання 1

# numbers = list(map(int, input("Завдання 1. Введіть список цілих чисел через пробіл: ").split()))
# count = sum(1 for i in range(1, len(numbers)) if numbers[i] > numbers[i-1])
# print("Кількість елементів:", count)

# Завдання 2

# numbers = list(map(int, input("Завдання 2. Введіть список цілих чисел через пробіл: ").split()))
# unique = [x for x in numbers if numbers.count(x) == 1]
# print("Результат:", unique)


# Завдання 3

# numbers = list(map(int, input("Завдання 3. Введіть список цілих чисел через пробіл: ").split()))

# best_seq = []
# current_seq = [numbers[0]]

# for i in range(1, len(numbers)):
#     if numbers[i] > numbers[i-1]:
#         current_seq.append(numbers[i])
#     else:
#         if len(current_seq) > len(best_seq):
#             best_seq = current_seq
#         current_seq = [numbers[i]]

# if len(current_seq) > len(best_seq):
#     best_seq = current_seq

# print("Довжина послідовності:", len(best_seq))
# print("Послідовність:", best_seq)

# Завдання 4

# numbers = list(map(int, input("Завдання 4. Введіть список цілих чисел через пробіл: ").split()))
# n = int(input("Введіть число позицій N: "))
# n %= len(numbers)
# shifted = numbers[-n:] + numbers[:-n]
# print("Зсунутий список:", shifted)


# Завдання 5

# list1 = [random.randint(0, 10) for _ in range(7)]
# list2 = [random.randint(0, 10) for _ in range(7)]

# print("Список 1:", list1)
# print("Список 2:", list2)

# combined = list1 + list2
# no_duplicates = list(set(list1 + list2))
# common = list(set(list1) & set(list2))
# unique_each = list(set(list1) ^ set(list2))
# min_max = [min(list1), max(list1), min(list2), max(list2)]

# print("1) Обидва списки:", combined)
# print("2) Без повторень:", no_duplicates)
# print("3) Спільні елементи:", common)
# print("4) Унікальні елементи:", unique_each)
# print("5) Мін/макс:", min_max)


# Завдання 6

# numbers = list(map(int, input("Завдання 6. Введіть список цілих чисел через пробіл: ").split()))
# numbers.sort()

# result = []
# while numbers:
#     if numbers:
#         result.append(numbers.pop(0))   
#     if numbers:
#         result.append(numbers.pop(-1))  

# print("Результат:", result)

