import math
import random

# Завдання 1

# print("\nЗавдання 1: Ділення двох чисел")
# try:
#     a = float(input("Введіть перше число: "))
#     b = float(input("Введіть друге число: "))
#     result = a / b
#     print("Результат ділення:", result)
# except ValueError:
#     print("Помилка: введено не число.")
# except ZeroDivisionError:
#     print("Помилка: ділення на нуль заборонене.")
# finally:
#     print("Операція завершена.\n")

# Завдання 2

# print("Завдання 2: Вибір елемента зі списку за індексом")
# my_list = [10, 20, 30, 40, 50]
# try:
#     index = int(input("Введіть індекс елемента: "))
#     print("Елемент списку:", my_list[index])
# except ValueError:
#     print("Помилка: індекс повинен бути числом.")
# except IndexError:
#     print("Помилка: індекс поза межами списку.")
# finally:
#     print("Операція завершена.\n")

# Завдання 3

# print("\nЗавдання 3: Сума продажів")
# try:
#     sales_input = input("Введіть продажі через пробіл: ")
#     sales_list = [float(x) for x in sales_input.split()]
#     total = sum(sales_list)
#     print("Загальна сума продажів:", total)
# except ValueError:
#     print("Помилка: введені дані некоректні.")
# finally:
#     print("Обробка завершена.\n")

# Завдання 4

# print("Завдання 4: Квадратний корінь числа")
# try:
#     num = float(input("Введіть число: "))
#     if num < 0:
#         raise Exception("Не можна обчислити квадратний корінь від'ємного числа")
#     sqrt_num = math.sqrt(num)
#     print("Квадратний корінь:", sqrt_num)
# except ValueError:
#     print("Помилка: введено не число.")
# except Exception as e:
#     print("Помилка:", e)
# finally:
#     print("Обчислення завершено.\n")

# Завдання 5

# print("\nЗавдання 5: Парсинг даних про товар")
# try:
#     data = input("Введіть дані про товар (назва, ціна, кількість): ")
#     name, price, quantity = data.split(",")
#     price = float(price.strip())
#     quantity = int(quantity.strip())
#     print(f"Товар: {name.strip()}, Ціна: {price}, Кількість: {quantity}")
# except ValueError:
#     print("Помилка: некоректні дані для ціни або кількості.")
# finally:
#     print("Парсинг завершено.\n")

# Завдання 6

# print("Завдання 6: Підключення до сервера")
# def connect_to_server():
#     if random.choice([True, False]):
#         return "Підключення успішне"
#     else:
#         raise ConnectionError("Помилка підключення")

# try:
#     message = connect_to_server()
#     print(message)
# except ConnectionError:
#     print("Не вдалося підключитися до сервера")
# finally:
#     print("Спробу завершено")
