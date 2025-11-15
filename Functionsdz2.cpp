#include <iostream>
#include <string>
using namespace std;

/* Завдання 1 */
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

/* Завдання 2 */
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

/* Завдання 3 */
int binaryToDecimal(string bin) {
    int result = 0;

    for (char c : bin) {
        result = result * 2 + (c - '0');
    }

    return result;
}

/* Тестування */
int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11 };
    int size = 6;

    cout << "Лінійний пошук 7: "
        << linearSearch(arr, size, 7) << endl;

    cout << "Бінарний пошук 7: "
        << binarySearch(arr, size, 7) << endl;

    cout << "Двійкове 101101 -> "
        << binaryToDecimal("101101") << endl;

    return 0;
}
