#include <stdio.h>
#include <conio.h>  

/*
   Program: Demonstrating variables, constants, comments, and user input in C
  
*/

#define PI 3.1416   

int main() {
   
    int age;             
    char grade;           
    float marks;         

    const int YEAR = 2025; 

    clrscr(); 

  
    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Grade (A/B/C...): ");
    scanf(" %c", &grade); 

    printf("Enter your Marks: ");
    scanf("%f", &marks);

  
    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer value (Age): %d\n", age);
    printf("Character value (Grade): %c\n", grade);
    printf("Float value (Marks): %.2f\n", marks);
    printf("Constant value (PI): %.4f\n", PI);
    printf("Constant value (Year): %d\n", YEAR);

    getch(); 
    
}
