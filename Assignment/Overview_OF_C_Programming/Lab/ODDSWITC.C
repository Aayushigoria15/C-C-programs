#include <stdio.h>
#include <conio.h>  
/*
   Program: Check Even/Odd and Display Month Name
*/
void main() {
    int num, month;

    clrscr();  

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    printf("Month name: ");
    switch(month) {
        case 1:  printf("January"); break;
        case 2:  printf("February"); break;
        case 3:  printf("March"); break;
        case 4:  printf("April"); break;
        case 5:  printf("May"); break;
        case 6:  printf("June"); break;
        case 7:  printf("July"); break;
        case 8:  printf("August"); break;
        case 9:  printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month number! (Enter 1-12)");
    }

    getch(); 
}
