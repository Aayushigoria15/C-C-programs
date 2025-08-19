#include <stdio.h>
#include <conio.h>   
/*
   Program: Demonstrating break and continue statements
*/

void main() {
    int i;

    clrscr();  
    printf("Using break statement (Stop at 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n\nUsing continue statement (Skip 3):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;  
        }
        printf("%d ", i);
    }

    getch(); 
}
