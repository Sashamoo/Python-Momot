import os
from collections import Counter
import re

# Завдання 1

# def write_three_lines():
#     lines = []
#     for i in range(3):
#         line = input(f"Введіть рядок {i+1}: ")
#         lines.append(line)
#     with open("data.txt", "w", encoding="utf-8") as f:
#         for line in lines:
#             f.write(line + "\n")
#     print("Рядки записані у data.txt")

# write_three_lines()


# Завдання 2

# def read_every_second_line():
#     if os.path.exists("data.txt"):
#         print("Файл data.txt існує")
#         with open("data.txt", "r", encoding="utf-8") as f:
#             lines = f.readlines()
#             print("Кожен другий рядок файлу:")
#             for i in range(1, len(lines), 2):
#                 print(lines[i].strip())
#     else:
#         print("Файл data.txt не існує")

# read_every_second_line()



# # Завдання 3

# def filter_python_lines():
#     if os.path.exists("data.txt"):
#         with open("data.txt", "r", encoding="utf-8") as f:
#             lines = f.readlines()
#         filtered = [line for line in lines if "Python" in line]
#         with open("filtered.txt", "w", encoding="utf-8") as f:
#             f.writelines(filtered)
#         print(f"Рядки, що містять 'Python', записані у filtered.txt")
#     else:
#         print("Файл data.txt не знайдено")

# filter_python_lines()


# Завдання 4

# def remove_digits_from_file():
#     filename = input("Введіть ім'я файлу для очищення: ")
#     if os.path.exists(filename):
#         with open(filename, "r", encoding="utf-8") as f:
#             content = f.read()
#         cleaned = re.sub(r"\d", "", content)
#         with open("cleaned.txt", "w", encoding="utf-8") as f:
#             f.write(cleaned)
#         print("Файл очищено від цифр і збережено у cleaned.txt")
#     else:
#         print(f"Файл {filename} не знайдено")

# remove_digits_from_file()

# Завдання 5

# def top_10_words():
#     filename = "log.txt"
#     if os.path.exists(filename):
#         with open(filename, "r", encoding="utf-8") as f:
#             text = f.read().lower()
#         words = re.findall(r"\b\w+\b", text)
#         counter = Counter(words)
#         most_common = counter.most_common(10)
#         with open("word_stats.txt", "w", encoding="utf-8") as f:
#             for word, count in most_common:
#                 f.write(f"{word}: {count}\n")
#         print("10 найпоширеніших слів записані у word_stats.txt")
#     else:
#         print(f"Файл {filename} не знайдено")

# top_10_words()


# Завдання 6

# def reverse_file_lines():
#     if os.path.exists("data.txt"):
#         with open("data.txt", "r", encoding="utf-8") as f:
#             lines = f.readlines()
#         lines.reverse()
#         with open("reversed.txt", "w", encoding="utf-8") as f:
#             f.writelines(lines)
#         print("Рядки інвертовані і записані у reversed.txt")
#     else:
#         print("Файл data.txt не знайдено")

# reverse_file_lines()
