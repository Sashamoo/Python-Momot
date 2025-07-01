# завдання 1
# start = int(input("Введіть початок діапазону: "))
# end = int(input("Введіть кінець діапазону: "))

# even_sum = odd_sum = mult9_sum = 0
# even_count = odd_count = mult9_count = 0

# for i in range(start, end + 1):
#     if i % 2 == 0:
#         even_sum += i
#         even_count += 1
#     else:
#         odd_sum += i
#         odd_count += 1
#     if i % 9 == 0:
#         mult9_sum += i
#         mult9_count += 1

# def avg(total, count):
#     return total / count if count != 0 else 0

# print("Сума парних:", even_sum, "Середнє:", avg(even_sum, even_count))
# print("Сума непарних:", odd_sum, "Середнє:", avg(odd_sum, odd_count))
# print("Сума кратних 9:", mult9_sum, "Середнє:", avg(mult9_sum, mult9_count))


# завдання 2
# l = int(input("Введіть довжину лінії: "))
# s = input("Введіть символ: ")

# for _ in range(l):
#     print(s)


# завдання 3
# while True:
#     num = int(input("Введіть число: "))
#     if num == 7:
#         print("Good bye!")
#         break
#     elif num > 0:
#         print("Number is positive")
#     elif num < 0:
#         print("Number is negative")
#     else:
#         print("Number is equal to zero")


# завдання 4
# total = 0
# min_num = None
# max_num = None

# while True:
#     num = int(input("Введіть число: "))
#     if num == 7:
#         print("Good bye!")
#         break
#     total += num
#     if min_num is None or num < min_num:
#         min_num = num
#     if max_num is None or num > max_num:
#         max_num = num

# print("Сума чисел:", total)
# print("Мінімум:", min_num)
# print("Максимум:", max_num)


# завдання 5
# n = int(input("Введіть число N: "))

# if n <= 1:
#     print("Число має бути більшим за 1")
# else:
#     is_prime = True
#     for i in range(2, int(n**0.5)+1):
#         if n % i == 0:
#             is_prime = False
#             break
#     if is_prime:
#         print(f"Число {n} є простим")
#     else:
#         print(f"Число {n} не є простим")



# завдання 6
# n = int(input("Введіть число N: "))

# a, b = 0, 1
# found = False

# while a <= n:
#     if a == n:
#         found = True
#         break
#     a, b = b, a + b

# if found:
#     print(f"Число {n} належить послідовності Фібоначчі")
# else:
#     print(f"Число {n} не належить послідовності Фібоначчі")


