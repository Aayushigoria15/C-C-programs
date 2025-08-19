#include<stdio.h>
#include<conio.h>

void main()
{
     int a[10],i;
     clrscr();
     printf("\nEnter array elements: \n");
     for(i=0;i<10;i++)
     {
	   printf("Enter %d elements: ",i);
	   scanf("%d",&a[i]);
     }
     getch();
}