#include <stdio.h>
#include <conio.h>  
/*
   Program: Factorial of a number using a function
*/

// --- Function Declaration ---
long factorial(int n);

void main() {
    int num;
    long fact;

    clrscr();  
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d = %ld", num, fact);
    getch(); 
}

// --- Function Definition ---
long factorial(int n) {
    long result = 1;
    int i;

    for(i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}
