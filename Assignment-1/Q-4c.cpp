#include <iostream>
using namespace std;

int main() {
    int m, n;
    int A[10][10], T[10][10];

    cout << "Enter rows and columns of the matrix: ";
    cin >> m >> n;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    // Find transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
