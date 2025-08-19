#include<stdio.h>
#include<conio.h>

void compare(a)
{
    if(a%2==0)
    {
       printf("\nnumber is even");
    }
    else
    {
       printf("\nnumber is odd");
    }
}

void main()
{
   int i;
   clrscr();
   printf("\n Enter a number:");
   scanf("%d",&i);
   compare(i);
   getch();
}