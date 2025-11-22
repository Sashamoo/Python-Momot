#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void printArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

/* Завдання 1  */
void task1() {
    int rows, cols, start;
    cout << "Завдання 1. Введіть кількість рядків, стовпців та початкове число: ";
    cin >> rows >> cols >> start;

    int arr[MAX_ROWS][MAX_COLS] = {0};

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 && j == 0)
                arr[i][j] = start;
            else if(j == 0)
                arr[i][j] = arr[i-1][cols-1] * 2;
            else
                arr[i][j] = arr[i][j-1] * 2;
        }
    }

    cout << "Масив:\n";
    printArray(arr, rows, cols);
}

/* Завдання 2 */
void task2() {
    int rows, cols, start;
    cout << "Завдання 2. Введіть кількість рядків, стовпців та початкове число: ";
    cin >> rows >> cols >> start;

    int arr[MAX_ROWS][MAX_COLS] = {0};

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 && j == 0)
                arr[i][j] = start;
            else if(j == 0)
                arr[i][j] = arr[i-1][cols-1] + 1;
            else
                arr[i][j] = arr[i][j-1] + 1;
        }
    }

    cout << "Масив:\n";
    printArray(arr, rows, cols);
}

void shiftRight(int row[MAX_COLS], int cols, int k) {
    k %= cols;
    int temp[MAX_COLS];
    for(int j = 0; j < cols; j++)
        temp[(j + k) % cols] = row[j];
    for(int j = 0; j < cols; j++)
        row[j] = temp[j];
}

void shiftLeft(int row[MAX_COLS], int cols, int k) {
    k %= cols;
    int temp[MAX_COLS];
    for(int j = 0; j < cols; j++)
        temp[j] = row[(j + k) % cols];
    for(int j = 0; j < cols; j++)
        row[j] = temp[j];
}

void shiftDown(int arr[MAX_ROWS][MAX_COLS], int rows, int col, int k) {
    k %= rows;
    int temp[MAX_ROWS];
    for(int i = 0; i < rows; i++)
        temp[(i + k) % rows] = arr[i][col];
    for(int i = 0; i < rows; i++)
        arr[i][col] = temp[i];
}

void shiftUp(int arr[MAX_ROWS][MAX_COLS], int rows, int col, int k) {
    k %= rows;
    int temp[MAX_ROWS];
    for(int i = 0; i < rows; i++)
        temp[i] = arr[(i + k) % rows][col];
    for(int i = 0; i < rows; i++)
        arr[i][col] = temp[i];
}

/* Завдання 3 */
void task3() {
    int rows, cols;
    cout << "Завдання 3. Введіть кількість рядків та стовпців: ";
    cin >> rows >> cols;

    int arr[MAX_ROWS][MAX_COLS];
    srand(time(0));
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            arr[i][j] = rand() % 10;

    cout << "Початковий масив:\n";
    printArray(arr, rows, cols);

    int k;
    string dir;
    cout << "Введіть кількість зрушень та напрямок (left, right, up, down): ";
    cin >> k >> dir;

    if(dir == "right")
        for(int i = 0; i < rows; i++) shiftRight(arr[i], cols, k);
    else if(dir == "left")
        for(int i = 0; i < rows; i++) shiftLeft(arr[i], cols, k);
    else if(dir == "down")
        for(int j = 0; j < cols; j++) shiftDown(arr, rows, j, k);
    else if(dir == "up")
        for(int j = 0; j < cols; j++) shiftUp(arr, rows, j, k);
    else
        cout << "Невірний напрямок!\n";

    cout << "Масив після зрушення:\n";
    printArray(arr, rows, cols);
}

int main() {
    task1();
    cout << "\n---------------------\n";
    task2();
    cout << "\n---------------------\n";
    task3();
    return 0;
}
