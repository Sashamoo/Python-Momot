#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sortArray(int arr[], int size, bool descending = false) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((!descending && arr[j] > arr[j + 1]) || (descending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void halfSort(int arr[], int size) {
    for (int i = 1; i < size / 2; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = size / 2 + 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= size / 2 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void sortBetweenNegatives(int arr[], int size) {
    int left = -1, right = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            left = (left == -1) ? i : left;
            right = i;
        }
    }
    if (left == -1 || left == right) return;
    for (int i = left + 1; i < right; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left + 1 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

void printStars(int n) {
    if (n == 0) return;
    cout << "*";
    printStars(n - 1);
}

int sumRange(int a, int b) {
    if (a > b) return 0;
    return a + sumRange(a + 1, b);
}

int minSumPos(int arr[], int index, int minIndex, int size) {
    if (index > size - 10) return minIndex;
    int sum = 0;
    for (int i = index; i < index + 10; i++) sum += arr[i];
    int minSum = 0;
    for (int i = minIndex; i < minIndex + 10; i++) minSum += arr[i];
    if (sum < minSum) minIndex = index;
    return minSumPos(arr, index + 1, minIndex, size);
}

int max(int arr[], int size) {
    if (size == 1) return arr[0];
    int m = max(arr + 1, size - 1);
    return (arr[0] > m) ? arr[0] : m;
}

int max(int arr[][3], int rows) {
    int result = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] > result) result = arr[i][j];
    return result;
}

int max(int arr[2][2][2], int d1, int d2, int d3) {
    int result = arr[0][0][0];
    for (int i = 0; i < d1; i++)
        for (int j = 0; j < d2; j++)
            for (int k = 0; k < d3; k++)
                if (arr[i][j][k] > result) result = arr[i][j][k];
    return result;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    srand(time(0));

    int arr1[10] = {7, -3, 15, 0, -10, 8, 4, -1, 12, 6};
    sortArray(arr1, 10);
    printArray(arr1, 10);
    sortArray(arr1, 10, true);
    printArray(arr1, 10);

    int arr2[10] = {5, 2, 9, 1, 6, 8, 3, 7, 0, 4};
    halfSort(arr2, 10);
    printArray(arr2, 10);

    int arr3[15];
    for (int i = 0; i < 15; i++) arr3[i] = rand() % 41 - 20;
    printArray(arr3, 15);
    sortBetweenNegatives(arr3, 15);
    printArray(arr3, 15);

    cout << power(2, 5) << endl;
    printStars(10);
    cout << endl;
    cout << sumRange(3, 7) << endl;

    int arr4[100];
    for (int i = 0; i < 100; i++) arr4[i] = rand() % 100;
    cout << minSumPos(arr4, 0, 0, 100) << endl;

    int arr5[5] = {1, 3, 7, 2, 5};
    cout << max(arr5, 5) << endl;

    int arr6[2][3] = {{1, 9, 2}, {4, 0, 7}};
    cout << max(arr6, 2) << endl;

    int arr7[2][2][2] = {{{1, 4}, {3, 2}}, {{7, 0}, {5, 6}}};
    cout << max(arr7, 2, 2, 2) << endl;

    cout << max(10, 20) << endl;
    cout << max(5, 15, 8) << endl;

    return 0;
}
