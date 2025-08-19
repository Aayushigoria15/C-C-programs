#include<stdio.h>
#include<conio.h>

void maximum(a,b)
{
   if(a>b)
   {
      printf("\na is maximum");
   }
   else
   {
      printf("\nb is maximum");
   }
}

void main()
{
   clrscr();
   printf("\nEnter number");
   scanf("%d");
   printf("\nEnter number");
   scanf("%d");
   maximum(a,b);
   getch();
}