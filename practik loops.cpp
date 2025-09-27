#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Завдання 1.
*/

/*
int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;

    
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
Завдання 2.
*/

/*
int main() {
    int a, b;
    cout << "Введіть дві межі: ";
    cin >> a >> b;
    if (a > b) swap(a, b);

    
    cout << "Усі числа: ";
    for (int i = a; i <= b; i++) cout << i << " ";
    cout << endl;

    
    cout << "Парні числа: ";
    for (int i = a; i <= b; i++) if (i % 2 == 0) cout << i << " ";
    cout << endl;

    
    cout << "Непарні числа: ";
    int i = a;
    while (i <= b) {
        if (i % 2 != 0) cout << i << " ";
        i++;
    }
    cout << endl;

   
    cout << "Кратні семи: ";
    for (int i = a; i <= b; i++) if (i % 7 == 0) cout << i << " ";
    cout << endl;

    return 0;
}
*/

/*
Завдання 3.
*/

/*
int main() {
    int a, b;
    cout << "Введіть дві межі: ";
    cin >> a >> b;
    if (a > b) swap(a, b);

 
    int sum = 0;
    for (int i = a; i <= b; i++) sum += i;

    cout << "Сума чисел діапазону: " << sum << endl;
    return 0;
}
*/

/*
Завдання 4.
*/

/*
int main() {
    int num, sum = 0;

    
    cout << "Вводьте числа (0 для завершення):" << endl;
    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "Сума введених чисел: " << sum << endl;
    return 0;
}
*/

/*
Завдання 5.
*/

/*
int main() {
    srand(time(0));
    int secret = 1 + rand() % 500;
    int guess = -1; // початкове значення
    int attempts = 0;

    cout << "Гра 'Вгадай число'!" << endl;
    cout << "Я загадав число від 1 до 500." << endl;
    cout << "Введіть 0, якщо хочете здатися." << endl;

    while (guess != secret) {
        cout << "Ваш варіант: ";
        cin >> guess;

        if (guess == 0) {
            cout << "Ви здалися. Загадане число було: " << secret << endl;
            return 0;
        }

        attempts++;

        if (guess < secret) cout << "Моє число більше!" << endl;
        else if (guess > secret) cout << "Моє число менше!" << endl;
        else cout << "Вітаю! Ви вгадали!" << endl;
    }

    cout << "Ви витратили " << attempts << " спроб(и)." << endl;
    return 0;
}
*/

/*
Завдання 6.
*/

/*


int main() {
    int choice;
    double amount;
    const double usd = 40.0, eur = 42.0, pln = 9.5;

    cout << "Конвертер валют" << endl;
    cout << "1. Гривня -> Долар" << endl;
    cout << "2. Гривня -> Євро" << endl;
    cout << "3. Гривня -> Злотий" << endl;
    cout << "4. Долар -> Гривня" << endl;
    cout << "5. Євро -> Гривня" << endl;
    cout << "6. Злотий -> Гривня" << endl;
    cout << "Ваш вибір: ";
    cin >> choice;

    cout << "Введіть суму: ";
    cin >> amount;

    switch (choice) {
        case 1: cout << amount / usd << " USD" << endl; break;
        case 2: cout << amount / eur << " EUR" << endl; break;
        case 3: cout << amount / pln << " PLN" << endl; break;
        case 4: cout << amount * usd << " UAH" << endl; break;
        case 5: cout << amount * eur << " UAH" << endl; break;
        case 6: cout << amount * pln << " UAH" << endl; break;
        default: cout << "Невірний вибір!" << endl;
    }

    return 0;
}
*/
