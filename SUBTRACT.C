#include<stdio.h>
#include<conio.h>

void printLine()
{
      int i;
      for(i=0;i<40;i++)
      {
	   printf("*");
      }
}
void add(int a,int b)
{
     printf("\nAddition : %d",a+b);
     printf("\n");
}
int sub(int a, int b)
{
      return a-b;
}
void main()
{
     int x,y;
     clrscr();
     printLine();
     printf("\nwelcome to user defined functions\n");
     printLine();
     printf("\nEnter value:");
     scanf("%d",&x);
     printf("\nEnter value:");
     scanf("%d",&y);
     add(x,y);
     printf("\nEnter value:");
     scanf("%d",&x);
     printf("\nEnter value:");
     scanf("%d",&y);
     printf("\nSubtraction: %d",sub(x,y));
     printf("\n");
     printLine();
     getch();
}
