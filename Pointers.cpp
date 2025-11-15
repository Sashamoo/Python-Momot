#include <iostream>
using namespace std;

int main() {

    /* Завдання 1 */
    const int N1 = 5;
    int a1[N1] = { 1, 2, 3, 4, 5 };
    int b1[N1];
    int* pA1 = a1;
    int* pB1 = b1;
    for (int i = 0; i < N1; i++)
        *(pB1 + i) = *(pA1 + i);

    cout << "Завдання 1: ";
    for (int i = 0; i < N1; i++)
        cout << *(pB1 + i) << " ";
    cout << endl;

    /* Завдання 2 */
    const int N2 = 6;
    int a2[N2] = { 10, 20, 30, 40, 50, 60 };
    int* left = a2;
    int* right = a2 + N2 - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    cout << "Завдання 2: ";
    for (int i = 0; i < N2; i++)
        cout << *(a2 + i) << " ";
    cout << endl;

    /* Завдання 3 */
    const int N3 = 5;
    int a3[N3] = { 3, 5, 7, 9, 11 };
    int b3[N3];
    int* pA3 = a3;
    int* pB3 = b3 + N3 - 1;
    for (int i = 0; i < N3; i++)
        *(pB3 - i) = *(pA3 + i);

    cout << "Завдання 3: ";
    for (int i = 0; i < N3; i++)
        cout << *(b3 + i) << " ";
    cout << endl;

    return 0;
}
