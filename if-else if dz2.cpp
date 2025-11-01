#include <iostream>
#include <cmath>
using namespace std;

/*
   Завдання 1
*/

/*
int main() {
    int num;
    cout << "Введіть шестизначне число: ";
    cin >> num;

    if (num < 100000 || num > 999999) {
        cout << "Помилка! Число не є шестизначним." << endl;
        return 0;
    }

    int d1 = num / 100000;
    int d2 = (num / 10000) % 10;
    int d3 = (num / 1000) % 10;
    int d4 = (num / 100) % 10;
    int d5 = (num / 10) % 10;
    int d6 = num % 10;

    if (d1 + d2 + d3 == d4 + d5 + d6)
        cout << "Число щасливе!" << endl;
    else
        cout << "Число нещасливе!" << endl;

    return 0;
}
*/

/*
   Завдання 2
*/

/*
int main() {
    int num;
    cout << "Введіть чотиризначне число: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Помилка! Число не є чотиризначним." << endl;
        return 0;
    }

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    int newNum = d2 * 1000 + d1 * 100 + d4 * 10 + d3;

    cout << "Нове число: " << newNum << endl;

    return 0;
}
*/

/*
   Завдання 3
*/

/*
int main() {
    int a, b, c, d, e, f, g;
    cout << "Введіть 7 чисел: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    int maxNum = a;

    if (b > maxNum) maxNum = b;
    if (c > maxNum) maxNum = c;
    if (d > maxNum) maxNum = d;
    if (e > maxNum) maxNum = e;
    if (f > maxNum) maxNum = f;
    if (g > maxNum) maxNum = g;

    cout << "Максимальне число: " << maxNum << endl;

    return 0;
}
*/

/*
   Завдання 4
*/

/*
int main() {
    int AB, BC, weight;
    cout << "Введіть відстань A-B: ";
    cin >> AB;
    cout << "Введіть відстань B-C: ";
    cin >> BC;
    cout << "Введіть вагу вантажу (кг): ";
    cin >> weight;

    int rate; // витрата палива л/км
    if (weight <= 500) rate = 1;
    else if (weight <= 1000) rate = 4;
    else if (weight <= 1500) rate = 7;
    else if (weight <= 2000) rate = 9;
    else {
        cout << "Літак не може підняти такий вантаж." << endl;
        return 0;
    }

    int fuelAB = AB * rate;
    int fuelBC = BC * rate;

    if (fuelAB > 300) {
        cout << "Неможливо долетіти з A до B." << endl;
        return 0;
    }
    if (fuelBC > 300) {
        cout << "Неможливо долетіти з B до C." << endl;
        return 0;
    }

    int refill = max(0, fuelBC - (300 - fuelAB));

    cout << "Мінімальна дозаправка в B: " << refill << " літрів." << endl;

    return 0;
}
*/
