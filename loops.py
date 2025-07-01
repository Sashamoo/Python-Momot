# завдання 1
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))

# for i in range(start, end + 1):
#     if i % 7 == 0:
#         print(i)



# завдання 2
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))

# print("Усі числа:")
# for i in range(start, end + 1):
#     print(i, end=' ')
# print()

# print("Усі числа в спадному порядку:")
# for i in range(end, start - 1, -1):
#     print(i, end=' ')
# print()

# print("Числа, кратні 7:")
# for i in range(start, end + 1):
#     if i % 7 == 0:
#         print(i, end=' ')
# print()

# count = 0
# for i in range(start, end + 1):
#     if i % 5 == 0:
#         count += 1
# print("Кількість чисел, кратних 5:", count)



# завдання 3
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))

# for i in range(start, end + 1):
#     if i % 3 == 0 and i % 5 == 0:
#         print("Fizz Buzz")
#     elif i % 3 == 0:
#         print("Fizz")
#     elif i % 5 == 0:
#         print("Buzz")
#     else:
#         print(i)


# завдання 4
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))
# step = int(input("Введіть крок: "))
# order = input("Порядок виводу (прямий/зворотний): ").strip().lower()

# if order == "прямий":
#     for i in range(start, end + 1, step):
#         print(i, end=' ')
# elif order == "зворотний":
#     for i in range(end, start - 1, -step):
#         print(i, end=' ')
# else:
#     print("Невірний вибір порядку.")


# завдання 5
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))

# if start > end:
#     start, end = end, start

# product = 1
# found = False

# for i in range(start, end + 1):
#     if i % 4 == 0 and i % 6 != 0:
#         product *= i
#         found = True

# if found:
#     print("Добуток чисел:", product)
# else:
#     print("Немає чисел, що діляться на 4, але не на 6.")


# завдання 6
# A = int(input("Введіть число A: "))
# N = int(input("Введіть степінь N: "))

# result = 1
# for _ in range(abs(N)):
#     result *= A

# if N < 0:
#     result = 1 / result

# print(f"{A} у степені {N} = {result}")




