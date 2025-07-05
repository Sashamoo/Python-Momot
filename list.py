# Завдання 1 
# numbers = list(map(int, input("Введіть цілі числа через пробіл: ").split()))
# total = sum(numbers)
# average = total / len(numbers) if numbers else 0
# print(f"Сума: {total}")
# print(f"Середнє арифметичне: {average}")




# Завдання 2 
# numbers = list(map(int, input("Введіть цілі числа через пробіл: ").split()))
# target = int(input("Введіть число для пошуку: "))
# count = numbers.count(target)
# print(f"Число {target} зустрічається {count} раз(ів).")




# Завдання 3 
# numbers = list(map(int, input("Введіть цілі числа через пробіл: ").split()))
# positive_sum = sum(n for n in numbers if n > 0)
# print(f"Сума додатних чисел: {positive_sum}")




# Завдання 4 
# numbers = list(map(int, input("Введіть цілі числа через пробіл: ").split()))
# even_indices = [i for i, n in enumerate(numbers) if n % 2 == 0]
# print(f"Індекси парних чисел: {even_indices}")




# Завдання 5
# text = input("Введіть текст: ")

# sentences = text.split('.')
# capitalized = '. '.join(s.strip().capitalize() for s in sentences if s.strip())
# print(capitalized)

# digits_count = sum(c.isdigit() for c in text)

# punctuation_marks = '.,:;!?()[]{}\'"'

# punctuation_count = sum(c in punctuation_marks for c in text)

# exclamation_count = text.count('!')

# print(f"\nКількість цифр: {digits_count}")
# print(f"Кількість розділових знаків: {punctuation_count}")
# print(f"Кількість знаків оклику: {exclamation_count}")



# Завдання 6 
# numbers = list(map(int, input("Введіть цілі числа через пробіл: ").split()))
# unique = []
# for num in numbers:
#     if numbers.count(num) == 1:
#         unique.append(num)
# print(f"Унікальні елементи: {unique}")
