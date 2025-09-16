#include <iostream.h>
#include <conio.h>

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    clrscr();

    Calculator calc;
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << calc.add(num1, num2);
            break;
        case 2:
            cout << "Result = " << calc.subtract(num1, num2);
            break;
        case 3:
            cout << "Result = " << calc.multiply(num1, num2);
            break;
        case 4:
            cout << "Result = " << calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    getch();
  
}
