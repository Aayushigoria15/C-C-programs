#include <iostream.h>
#include <conio.h>

int globalVar = 10;   // Global variable

void showScope() {
    int localVar = 20;   // Local variable
    cout << "Inside function: " << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable = " << localVar << endl;
}

int main() {
    clrscr();

    int localVar = 30;   // Local variable in main
    cout << "Inside main: " << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable (in main) = " << localVar << endl;

    showScope();  

    getch();
    return 0;
}
