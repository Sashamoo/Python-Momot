#include <iostream>
#include <cmath>
using namespace std;

/* Завдання 1 */
 
/*
void printRectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N, K;
    cout << "Введіть висоту N і ширину K: ";
    cin >> N >> K;
    printRectangle(N, K);
    return 0;
}
*/

/* Завдання 2 */
 
/*
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;
    cout << "Факторіал = " << factorial(n) << endl;
    return 0;
}
*/

/* Завдання 3 */
 
/*
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;
    if (isPrime(n))
        cout << "Число просте" << endl;
    else
        cout << "Число не є простим" << endl;
    return 0;
}
*/

/* Завдання 4 */
 
/*
int cube(int x) {
    return x * x * x;
}

int main() {
    int x;
    cout << "Введіть число: ";
    cin >> x;
    cout << "Куб числа = " << cube(x) << endl;
    return 0;
}
*/

/* Завдання 5 */
 
/*
int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    cout << "Найбільше число = " << maxOfTwo(a, b) << endl;
    return 0;
}
*/

/* Завдання 6 */
 
/*
bool isPositive(int x) {
    return x > 0;
}

int main() {
    int x;
    cout << "Введіть число: ";
    cin >> x;
    if (isPositive(x))
        cout << "Число додатне" << endl;
    else
        cout << "Число від’ємне" << endl;
    return 0;
}
*/
