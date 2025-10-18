#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Завдання 1 */
/*
int main() {
    const int n = 10;
    int arr[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 6;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) arr[index++] = arr[i];
    }

    for (int i = index; i < n; i++) {
        arr[i] = -1;
    }

    cout << "Після стиснення:  ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
*/

/* Завдання 2 */
/*
int main() {
    const int n = 5;
    int A[n], B[n];
    int C[2 * n];
    int k = 0;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 7 - 2;
        B[i] = rand() % 7 - 2;
    }

    cout << "Масив A: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;

    cout << "Масив B: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;

    for (int i = 0; i < n; i++) if (A[i] > 0) C[k++] = A[i];
    for (int i = 0; i < n; i++) if (B[i] > 0) C[k++] = B[i];

    for (int i = 0; i < n; i++) if (A[i] == 0) C[k++] = A[i];
    for (int i = 0; i < n; i++) if (B[i] == 0) C[k++] = B[i];

    for (int i = 0; i < n; i++) if (A[i] < 0) C[k++] = A[i];
    for (int i = 0; i < n; i++) if (B[i] < 0) C[k++] = B[i];

    cout << "Результат об’єднання: ";
    for (int i = 0; i < 2 * n; i++) cout << C[i] << " ";
    cout << endl;

    return 0;
}
*/
