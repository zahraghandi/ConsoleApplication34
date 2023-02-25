#include <iostream>
using namespace std;
int main() {
    int a[3][3], i, j;
    int det = 0;

    cout << "Enter the matrix" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    // Calculate the determinant
    det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    cout << "The determinant of the 3x3 matrix is: " << det << endl;
    return 0;
}