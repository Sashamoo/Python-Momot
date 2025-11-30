#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M;
    int* A = new int[M];
    for (int i = 0; i < M; i++) cin >> *(A + i);
    cin >> N;
    int* B = new int[N];
    for (int i = 0; i < N; i++) cin >> *(B + i);

    int* C1 = new int[M + N];
    for (int i = 0; i < M; i++) *(C1 + i) = *(A + i);
    for (int i = 0; i < N; i++) *(C1 + M + i) = *(B + i);
    for (int i = 0; i < M + N; i++) cout << *(C1 + i) << " ";
    cout << endl;
    delete[] C1;

    int* C2 = new int[M + N];
    int size2 = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (*(A + i) == *(B + j)) {
                bool exists = false;
                for (int k = 0; k < size2; k++)
                    if (*(C2 + k) == *(A + i)) exists = true;
                if (!exists) *(C2 + size2++) = *(A + i);
            }
        }
    }
    for (int i = 0; i < size2; i++) cout << *(C2 + i) << " ";
    cout << endl;
    delete[] C2;

    int choice;
    cin >> M;
    int* D = new int[M];
    for (int i = 0; i < M; i++) cin >> *(D + i);
    cin >> choice;
    int size3 = 0;
    for (int i = 0; i < M; i++) {
        if ((choice == 1 && *(D + i) % 2 != 0) || (choice == 2 && *(D + i) % 2 == 0))
            *(D + size3++) = *(D + i);
    }
    for (int i = 0; i < size3; i++) cout << *(D + i) << " ";
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] D;

    return 0;
}
