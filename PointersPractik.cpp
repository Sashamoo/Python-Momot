#include <iostream>
using namespace std;

/* Завдання 1 */
void maxOfTwo() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    int *pA = &a, *pB = &b;

    if (*pA > *pB)
        cout << "Більше число: " << *pA << endl;
    else
        cout << "Більше число: " << *pB << endl;
}

/* Завдання 2 */
void signOfNumber() {
    int x;
    cout << "Введіть число: ";
    cin >> x;

    int *pX = &x;

    if (*pX > 0)
        cout << "Число додатне\n";
    else if (*pX < 0)
        cout << "Число від’ємне\n";
    else
        cout << "Число нуль\n";
}

/* Завдання 3 */
void swapValues() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    int *pA = &a, *pB = &b;

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    cout << "Після обміну: a = " << a << ", b = " << b << endl;
}

/* Завдання 4 */
void calculator() {
    double a, b;
    char op;
    cout << "Введіть вираз (наприклад: 5 + 3): ";
    cin >> a >> op >> b;

    double *pA = &a, *pB = &b, result;

    switch (op) {
        case '+': result = *pA + *pB; break;
        case '-': result = *pA - *pB; break;
        case '*': result = *pA * *pB; break;
        case '/':
            if (*pB != 0)
                result = *pA / *pB;
            else {
                cout << "Ділення на нуль!\n";
                return;
            }
            break;
        default:
            cout << "Невідома операція!\n";
            return;
    }

    cout << "Результат: " << result << endl;
}

/* Завдання 5 */
void sumOfArray() {
    const int MAX_SIZE = 100; 
    int arr[MAX_SIZE];
    int n;

    cout << "Введіть кількість елементів масиву (не більше 100): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Невірна кількість елементів!\n";
        return;
    }

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i); 

    int sum = 0;
    int *p = arr; 

    for (int i = 0; i < n; i++)
        sum += *(p + i); 

    cout << "Сума елементів: " << sum << endl;
}

/* Головне меню */
int main() {
    int choice;
    do {
        cout << "\nВиберіть завдання (1-5) або 0 для виходу: ";
        cin >> choice;

        switch (choice) {
            case 1: maxOfTwo(); break;
            case 2: signOfNumber(); break;
            case 3: swapValues(); break;
            case 4: calculator(); break;
            case 5: sumOfArray(); break;
            case 0: cout << "Вихід...\n"; break;
            default: cout << "Невірний вибір!\n";
        }
    } while (choice != 0);

    return 0;
}
