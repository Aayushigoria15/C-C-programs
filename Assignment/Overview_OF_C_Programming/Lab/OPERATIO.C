#include <stdio.h>
#include <conio.h>

/*
   Program: Demonstrating Arithmetic, Relational, and Logical Operations
   
*/
void main() {
    int a, b;

    clrscr();  
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // --- Arithmetic Operations ---
    printf("\n--- Arithmetic Operations ---\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);   
        printf("%d %% %d = %d\n", a, b, a % b); 
    } else {
        printf("Division and modulus not possible (b = 0)\n");
    }

    // --- Relational Operations ---
    printf("\n--- Relational Operations ---\n");
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);

    // --- Logical Operations ---
    printf("\n--- Logical Operations ---\n");
    printf("(%d && %d) : %d\n", a, b, (a && b));
    printf("(%d || %d) : %d\n", a, b, (a || b));
    printf("!%d = %d\n", a, !a);
    printf("!%d = %d\n", b, !b);

    getch();
}
