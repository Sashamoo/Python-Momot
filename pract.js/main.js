// Завдання 1
let num = Number(prompt("Введіть число:"));
alert(`Квадрат числа = ${num ** 2}`);


// Завдання 2
let a1 = Number(prompt("Введіть перше число:"));
let a2 = Number(prompt("Введіть друге число:"));
alert(`Середнє арифметичне = ${(a1 + a2) / 2}`);


// Завдання 3
let side = Number(prompt("Введіть довжину сторони квадрата:"));
alert(`Площа квадрата = ${side ** 2}`);


// Завдання 4
const MILES_IN_KM = 0.621371;
let km = Number(prompt("Введіть кількість кілометрів:"));
alert(`${km} км = ${(km * MILES_IN_KM).toFixed(3)} миль`);


// Завдання 5
let n1 = Number(prompt("Введіть перше число:"));
let n2 = Number(prompt("Введіть друге число:"));
alert(
  `Результати:\n` +
  `${n1} + ${n2} = ${n1 + n2}\n` +
  `${n1} - ${n2} = ${n1 - n2}\n` +
  `${n1} * ${n2} = ${n1 * n2}\n` +
  `${n1} / ${n2} = ${(n1 / n2).toFixed(2)}`
);


// Завдання 6
let a = Number(prompt("Введіть a:"));
let b = Number(prompt("Введіть b:"));
if (a === 0) {
  alert("Помилка: a не може дорівнювати 0!");
} else {
  let x = -b / a;
  alert(`Розв’язок: x = ${x}`);
}


// Завдання 7
let hours = Number(prompt("Введіть поточні години (0–23):"));
let minutes = Number(prompt("Введіть поточні хвилини (0–59):"));
let totalMinutes = hours * 60 + minutes;
let remaining = 24 * 60 - totalMinutes;
let remHours = Math.floor(remaining / 60);
let remMinutes = remaining % 60;
alert(`До наступного дня залишилося ${remHours} год. ${remMinutes} хв.`);


// Завдання 8
let threeDigit = Number(prompt("Введіть тризначне число:"));
let secondDigit = Math.floor((threeDigit % 100) / 10);
alert(`Друга цифра = ${secondDigit}`);


// Завдання 9
let fiveDigit = prompt("Введіть п'ятизначне число:");
if (fiveDigit.length === 5) {
  let newNumber = fiveDigit.slice(-1) + fiveDigit.slice(0, 4);
  alert(`Результат: ${newNumber}`);
} else {
  alert("Це не п'ятизначне число!");
}


// Завдання 10
let sales = Number(prompt("Введіть суму продажів за місяць:"));
let salary = 250 + sales * 0.1;
alert(`Зарплата працівника: $${salary.toFixed(2)}`);
