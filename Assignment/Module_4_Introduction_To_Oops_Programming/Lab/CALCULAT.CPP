#include <iostream.h>
#include <conio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero not allowed." << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    clrscr();

    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result = " << add(num1, num2); break;
        case 2: cout << "Result = " << subtract(num1, num2); break;
        case 3: cout << "Result = " << multiply(num1, num2); break;
        case 4: cout << "Result = " << divide(num1, num2); break;
        default: cout << "Invalid choice!";
    }

    getch();
    return 0;
}
