import random


# Завдання 1

# numbers = list(map(int, input("Завдання 1. Введіть список цілих чисел через пробіл: ").split()))
# even_count = sum(1 for x in numbers if x % 2 == 0)
# odd_count = len(numbers) - even_count
# print("Кількість парних чисел:", even_count)
# print("Кількість непарних чисел:", odd_count)

# Завдання 2

# numbers = list(map(int, input("Завдання 2. Введіть список цілих чисел через пробіл: ").split()))
# print("Мінімальне значення:", min(numbers))
# print("Максимальне значення:", max(numbers))

# Завдання 3

# numbers = [random.randint(-10, 10) for _ in range(15)]
# print("Завдання 3. Список:", numbers)

# positive_numbers = [x for x in numbers if x > 0]
# negative_numbers = [x for x in numbers if x < 0]

# min_positive = min(positive_numbers) if positive_numbers else None
# max_negative = max(negative_numbers) if negative_numbers else None

# print("Мінімальний додатний елемент:", min_positive)
# print("Максимальний від'ємний елемент:", max_negative)
# print("Кількість від'ємних:", len(negative_numbers))
# print("Кількість додатних:", len(positive_numbers))
# print("Кількість нулів:", numbers.count(0))

# Завдання 4

# numbers = list(map(int, input("Завдання 4. Введіть список цілих чисел через пробіл: ").split()))
# k = int(input("Введіть число k: "))

# filtered = [x for x in numbers if x >= k]
# print("Результат:", filtered)

# Завдання 5


# expr = input("Завдання 5. Введіть вираз (наприклад 23+12): ")

# if "+" in expr:
#     a, b = map(int, expr.split("+"))
#     print("Результат:", a + b)
# elif "-" in expr:
#     a, b = map(int, expr.split("-"))
#     print("Результат:", a - b)
# elif "*" in expr:
#     a, b = map(int, expr.split("*"))
#     print("Результат:", a * b)
# elif "/" in expr:
#     a, b = map(int, expr.split("/"))
#     if b != 0:
#         print("Результат:", a / b)
#     else:
#         print("Ділення на нуль неможливе!")
# else:
#     print("Неправильний вираз!")


# Завдання 6


# numbers = list(map(int, input("Завдання 6. Введіть список цілих чисел через пробіл: ").split()))

# sorted_non_neg = sorted([x for x in numbers if x >= 0])
# result = []
# j = 0

# for x in numbers:
#     if x < 0:
#         result.append(x)
#     else:
#         result.append(sorted_non_neg[j])
#         j += 1

# print("Результат:", result)

