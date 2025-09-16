#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int A[2][2], B[2][2], Sum[2][2];
    int i, j;
    cout << "Enter elements of 1st 2x2 matrix:\n";
    for (i = 0; i < 2; i++) {
	for (j = 0; j < 2; j++) {
	    cout << "A[" << i << "][" << j << "] = ";
	    cin >> A[i][j];
	}
    }
    cout << "\nEnter elements of 2nd 2x2 matrix:\n";
    for (i = 0; i < 2; i++) {
	for (j = 0; j < 2; j++) {
	    cout << "B[" << i << "][" << j << "] = ";
	    cin >> B[i][j];
	}
    }

    // Matrix addition
    for (i = 0; i < 2; i++) {
	for (j = 0; j < 2; j++) {
	    Sum[i][j] = A[i][j] + B[i][j];
	}
    }
    cout << "\nResultant Matrix (A + B):\n";
    for (i = 0; i < 2; i++) {
	for (j = 0; j < 2; j++) {
	    cout << Sum[i][j] << " ";
	}
	cout << endl;
    }

    getch();
}
