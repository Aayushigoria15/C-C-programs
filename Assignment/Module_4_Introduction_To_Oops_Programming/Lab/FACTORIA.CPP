#include <iostream.h>
#include <conio.h>

long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    clrscr();

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of negative number is not defined.";
    } else {
        cout << "Factorial of " << num << " = " << factorial(num);
    }

    getch();
    return 0;
}
