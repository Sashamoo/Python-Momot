#include <iostream>
using namespace std;

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[5], arr3[5];

    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
        arr3[i] = arr1[i+5];
    }

    cout << "Масив 2: ";
    for (int i = 0; i < 5; i++) cout << arr2[i] << " ";
    cout << "\nМасив 3: ";
    for (int i = 0; i < 5; i++) cout << arr3[i] << " ";
    cout << "\n\n";

    int a[5] = {1,2,3,4,5};
    int b[5] = {5,4,3,2,1};
    int sum[5];

    for (int i = 0; i < 5; i++) {
        sum[i] = a[i] + b[i];
    }

    cout << "Сума двох масивів: ";
    for (int i = 0; i < 5; i++) cout << sum[i] << " ";
    cout << endl;

    return 0;
}
