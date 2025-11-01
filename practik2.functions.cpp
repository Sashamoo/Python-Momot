#include <iostream>
#include <cmath>
using namespace std;

/* Завдання 1 */

/*
void findMinMax(int arr[], int size) {
    int minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    cout << "Мінімум: " << minVal << " (індекс " << minIndex << ")" << endl;
    cout << "Максимум: " << maxVal << " (індекс " << maxIndex << ")" << endl;
}

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int arr[n];
    cout << "Введіть елементи: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    findMinMax(arr, n);
    return 0;
}
*/

/* Завдання 2 */

/*
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int arr[n];
    cout << "Введіть елементи: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArray(arr, n);

    cout << "Масив у зворотному порядку: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

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

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int arr[n];
    cout << "Введіть елементи: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Кількість простих чисел = " << countPrimes(arr, n) << endl;
    return 0;
}
*/
