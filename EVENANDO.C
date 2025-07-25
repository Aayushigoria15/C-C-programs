#include<stdio.h>
#include<conio.h>

void main()
{
   int a;
   clrscr();
   printf("\nEnter a:");
   scanf("%d",&a);
   if(a%2==0)
   {
	printf("\na is even number:");
   }
   else
   {
	printf("\na is odd number");
   }
   getch();
}