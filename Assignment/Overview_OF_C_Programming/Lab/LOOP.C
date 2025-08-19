#include <stdio.h>
#include <conio.h>  

/*
   Program: Print numbers from 1 to 10 using while, for, and do-while loops
*/

int main() {
    int i;

    clrscr(); 

    // --- Using while loop ---
    printf("Numbers from 1 to 10 using while loop:\n");
    i = 1;
    while(i <= 10) {
        printf("%d ", i);
        i++;
    }

    // --- Using for loop ---
    printf("\n\nNumbers from 1 to 10 using for loop:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // --- Using do-while loop ---
    printf("\n\nNumbers from 1 to 10 using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);

    getch(); 
    return 0;
}
