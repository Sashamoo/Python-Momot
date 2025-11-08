#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;

/*Завдання 1*/
void initMatrix(int** matrix, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = rand() % 100;
}

void initMatrix(double** matrix, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = (rand() % 10000) / 100.0;
}

void initMatrix(char** matrix, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = 'A' + rand() % 26;
}

template <typename T>
void printMatrix(T** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(5) << matrix[i][j];
        cout << endl;
    }
}

template <typename T>
void diagMinMax(T** matrix, int n, T &minVal, T &maxVal) {
    minVal = maxVal = matrix[0][0];
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

template <typename T>
void sortRows(T** matrix, int n) {
    for (int i = 0; i < n; i++)
        sort(matrix[i], matrix[i] + n);
}

/*Завдання 2*/
int gcd(int a, int b) {
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

/*Завдання 3*/
void bullsAndCows(string secret, int attempts = 1) {
    string guess;
    cout << "Спроба " << attempts << ". Введіть число: ";
    cin >> guess;

    if (guess == secret) {
        cout << "Ви вгадали число за " << attempts << " спроб!" << endl;
        return;
    }

    int bulls = 0, cows = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == secret[i]) cows++;
        else if (secret.find(guess[i]) != string::npos) bulls++;
    }

    cout << "Бики: " << bulls << ", Корови: " << cows << endl;
    bullsAndCows(secret, attempts + 1);
}

/*Завдання 4*/
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysFromStart(int d, int m, int y) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = d;

    for (int i = 1; i < y; i++)
        days += isLeapYear(i) ? 366 : 365;

    for (int i = 0; i < m - 1; i++) {
        days += daysInMonth[i];
        if (i == 1 && isLeapYear(y)) days++;
    }

    return days;
}

int dateDifference(int d1, int m1, int y1, int d2, int m2, int y2) {
    int days1 = daysFromStart(d1, m1, y1);
    int days2 = daysFromStart(d2, m2, y2);
    return abs(days1 - days2);
}

/*Завдання 5*/
double average(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum / n;
}

/*Завдання 6*/
void countElements(double arr[], int n, int &positive, int &negative, int &zero) {
    positive = negative = zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
        else zero++;
    }
}

/*Головна функція*/
int main() {
    srand(time(0));

    int n = 3;
    int** m1 = new int*[n];
    for (int i = 0; i < n; i++) m1[i] = new int[n];
    initMatrix(m1, n);
    cout << "Матриця int:\n"; printMatrix(m1, n);
    int minI, maxI; diagMinMax(m1, n, minI, maxI);
    cout << "Мін: " << minI << ", Макс: " << maxI << endl;
    sortRows(m1, n); cout << "Відсортована:\n"; printMatrix(m1, n);

    cout << "\nНСД(24, 36) = " << gcd(24, 36) << endl;

    string secret = "1234";
    cout << "\nГра 'Бики та корови'\n";
    bullsAndCows(secret);

    cout << "\nРізниця між 1.1.2020 і 10.1.2020 = "
         << dateDifference(1,1,2020,10,1,2020) << " днів\n";

    double arr[] = {1.5, -2.3, 0, 4.7};
    int size = 4;
    cout << "Середнє арифметичне: " << average(arr, size) << endl;

    int pos, neg, zer;
    countElements(arr, size, pos, neg, zer);
    cout << "Додатних: " << pos << ", Від'ємних: " << neg << ", Нульових: " << zer << endl;

    for (int i = 0; i < n; i++) delete[] m1[i];
    delete[] m1;

    return 0;
}
