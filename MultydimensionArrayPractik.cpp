#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void addRowToEnd(int**& arr, int& rows, int cols, int* newRow) {
    int** temp = new int*[rows + 1];
    for (int i = 0; i < rows; i++) temp[i] = arr[i];
    temp[rows] = newRow;
    delete[] arr;
    arr = temp;
    rows++;
}

void addRowToStart(int**& arr, int& rows, int cols, int* newRow) {
    int** temp = new int*[rows + 1];
    temp[0] = newRow;
    for (int i = 0; i < rows; i++) temp[i + 1] = arr[i];
    delete[] arr;
    arr = temp;
    rows++;
}

void addRowAtPosition(int**& arr, int& rows, int cols, int* newRow, int pos) {
    if (pos < 0) pos = 0;
    if (pos > rows) pos = rows;
    int** temp = new int*[rows + 1];
    for (int i = 0; i < pos; i++) temp[i] = arr[i];
    temp[pos] = newRow;
    for (int i = pos; i < rows; i++) temp[i + 1] = arr[i];
    delete[] arr;
    arr = temp;
    rows++;
}

void deleteRow(int**& arr, int& rows, int cols, int pos) {
    if (rows == 0) return;
    if (pos < 0) pos = 0;
    if (pos >= rows) pos = rows - 1;
    int** temp = new int*[rows - 1];
    for (int i = 0; i < pos; i++) temp[i] = arr[i];
    delete[] arr[pos];
    for (int i = pos + 1; i < rows; i++) temp[i - 1] = arr[i];
    delete[] arr;
    arr = temp;
    rows--;
}

bool rowHasZero(int* row, int cols) {
    for (int i = 0; i < cols; i++)
        if (row[i] == 0) return true;
    return false;
}

void removeZeroRows(int**& arr, int& rows, int cols) {
    int newCount = 0;
    for (int i = 0; i < rows; i++)
        if (!rowHasZero(arr[i], cols)) newCount++;
    int** temp = new int*[newCount];
    int idx = 0;
    for (int i = 0; i < rows; i++) {
        if (!rowHasZero(arr[i], cols)) temp[idx++] = arr[i];
        else delete[] arr[i];
    }
    delete[] arr;
    arr = temp;
    rows = newCount;
}

int** createMatrix(int rows, int cols) {
    int** M = new int*[rows];
    for (int i = 0; i < rows; i++) M[i] = new int[cols];
    return M;
}

void fillRandom(int** M, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            M[i][j] = rand() % 10;
}

int** sumMatrices(int** A, int** B, int rows, int cols) {
    int** C = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

void printMatrix(int** M, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }
}

int main() {
    srand(time(0));
    int rows = 3, cols = 4;
    int** arr = createMatrix(rows, cols);
    fillRandom(arr, rows, cols);
    cout << "Початковий масив:\n";
    printMatrix(arr, rows, cols);

    int* R1 = new int[cols]{7,7,7,7};
    addRowToEnd(arr, rows, cols, R1);
    cout << "\nПісля додавання в кінець:\n";
    printMatrix(arr, rows, cols);

    int* R2 = new int[cols]{1,1,1,1};
    addRowToStart(arr, rows, cols, R2);
    cout << "\nПісля додавання на початок:\n";
    printMatrix(arr, rows, cols);

    int* R3 = new int[cols]{2,2,2,2};
    addRowAtPosition(arr, rows, cols, R3, 2);
    cout << "\nПісля додавання у позицію 2:\n";
    printMatrix(arr, rows, cols);

    deleteRow(arr, rows, cols, 1);
    cout << "\nПісля видалення рядка 1:\n";
    printMatrix(arr, rows, cols);

    removeZeroRows(arr, rows, cols);
    cout << "\nПісля видалення рядків з нулями:\n";
    printMatrix(arr, rows, cols);

    int R, C;
    cout << "\nВведіть рядки для сумування двох матриць: ";
    cin >> R;
    cout << "Введіть стовпці для сумування двох матриць: ";
    cin >> C;

    int** A = createMatrix(R, C);
    int** B = createMatrix(R, C);
    fillRandom(A, R, C);
    fillRandom(B, R, C);

    cout << "\nМасив A:\n";
    printMatrix(A, R, C);
    cout << "\nМасив B:\n";
    printMatrix(B, R, C);

    int** Csum = sumMatrices(A, B, R, C);
    cout << "\nA + B =\n";
    printMatrix(Csum, R, C);

    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;
    for (int i = 0; i < R; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] Csum[i];
    }
    delete[] A;
    delete[] B;
    delete[] Csum;

    return 0;
}
