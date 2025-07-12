# Завдання 1 

# text = "Сонце сідає за обрій. На вулиці стає тихо." \
# " Діти вже повернулися додому." \
# " Легкий вітер колихає гілки дерев." \
# " У вікнах будинків з’являється світло." \
# " Десь далеко чути гавкіт собаки. Настає спокійний вечір."
# count = 0
# for ch in text:
#     if ch in ".!?":
#         count += 1
# print("Кількість речень:", count)

# Завдання 2 

# text = input("Введіть рядок для перевірки на паліндром: ")
# normalized = ""
# for c in text:
#     if c.isalnum():
#         normalized += c.lower()
# if normalized == normalized[::-1]:
#     print("Це паліндром.")
# else:
#     print("Це не паліндром.")

# Завдання 3 

# text = input("Введіть текст для перевірки зарезервованих слів: ")
# reserved = ["apple", "bag", "desk", "thor", "water", "mint"]
# words = text.split()
# result = ""
# for word in words:
#     if word.lower() in reserved:
#         result += word.upper() + " "
#     else:
#         result += word + " "
# print("Оновлений текст:", result.strip())

# Завдання 4

# line = input("Введіть рядок: ")
# c1 = input("Введіть перший символ: ")
# c2 = input("Введіть другий символ: ")
# i1 = line.find(c1)
# i2 = line.find(c2, i1 + 1)
# if i1 != -1 and i2 != -1:
#     print("Результат:", line[:i1] + line[i2+1:])
# else:
#     print("Результат:", line)

# Завдання 5 

# text = input("Введіть текст: ")
# chars = input("Введіть символи (без пробілів): ")
# words = text.split()
# result = ""
# for word in words:
#     has_bad = False
#     for ch in chars:
#         if ch in word:
#             has_bad = True
#             break
#     if not has_bad:
#         result += word + " "
# print("Очищений текст:", result.strip())

# Завдання 6 

# text = input("Введіть текст для перевороту: ")
# words = text.split()
# reversed_text = ""
# for i in range(len(words)-1, -1, -1):
#     reversed_text += words[i] + " "
# print("Зворотний текст:", reversed_text.strip())
