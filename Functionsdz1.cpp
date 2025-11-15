#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* Завдання 1 */
double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < abs(exponent); i++)
        result *= base;
    if (exponent < 0) return 1.0 / result;
    return result;
}

/* Завдання 2 */
int sumRange(int a, int b) {
    if (a > b) swap(a, b);
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;
    return sum;
}

/* Завдання 3 */
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}

void findPerfect(int a, int b) {
    if (a > b) swap(a, b);
    cout << "Досконалі числа у проміжку [" << a << ", " << b << "]: ";
    bool found = false;

    for (int i = a; i <= b; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "немає.";
    cout << endl;
}

/* Завдання 4 */
void printCard(int value, char suit) {
    string v;

    switch (value) {
    case 11: v = "J"; break;
    case 12: v = "Q"; break;
    case 13: v = "K"; break;
    case 14: v = "A"; break;
    default: v = to_string(value);
    }

    cout << "-----\n";
    cout << "| " << v << suit << " |\n";
    cout << "-----\n";
}

/* Завдання 5 */
bool isLucky(int n) {
    if (n < 100000 || n > 999999) return false;
    int a1 = n / 100000;
    int a2 = (n / 10000) % 10;
    int a3 = (n / 1000) % 10;
    int b1 = (n / 100) % 10;
    int b2 = (n / 10) % 10;
    int b3 = n % 10;
    return (a1 + a2 + a3) == (b1 + b2 + b3);
}

/* Тестування */
int main() {
    cout << "power(2, 5) = " << power(2, 5) << endl;
    cout << "sumRange(3, 7) = " << sumRange(3, 7) << endl;
    findPerfect(1, 10000);
    printCard(12, '♠');
    cout << "385916 -> " << (isLucky(385916) ? "щасливе" : "не щасливе") << endl;

    return 0;
}

