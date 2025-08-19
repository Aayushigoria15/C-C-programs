#include <stdio.h>
#include <conio.h>
/*
   Program: Arrays in C (1D and 2D) with Sum Calculation
*/

int main() {
    int arr1D[5];
    int arr2D[3][3];
    int i, j, sum = 0;

    clrscr(); 

    //  One-Dimensional Array 
    printf("Enter 5 integers for 1D array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1D[i]);
    }

    printf("\n1D Array Elements:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }

    // Two-Dimensional Array 
    printf("\n\nEnter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr2D[i][j]);
        }
    }

    printf("\n2D Array (3x3 Matrix):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
            sum += arr2D[i][j];   
        }
        printf("\n");
    }

    
    printf("\nSum of all elements in 3x3 matrix = %d", sum);

    getch();
}
