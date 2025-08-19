#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
	int a,b,ans,choice;
	clrscr();
	delay(1000);
	textcolor(10);
	printf("\n******************************************\n");
	cprintf("Enter A :");
	scanf("%d",&a);
	textcolor(11);
	printf("\n******************************************\n");
	cprintf("Enter B :");
	scanf("%d",&b);
	delay(1000);
	printf("\n******************************************\n");
	textcolor(12);
	cprintf("1.Addition");
	printf("\n");
	cprintf("2.Subtraction");
	printf("\n");
	cprintf("3.Multiplication");
	printf("\n");
	cprintf("4.Division");
	printf("\n");
	delay(1000);
	printf("\n******************************************\n");
	printf("\n\nEnter your choice:");
	scanf("%d",&choice);
	delay(1000);
	printf("\n******************************************\n");
	delay(1000);
	switch(choice)
	{
	     case 1:
		      ans=a+b;
		      printf("\nAddition : %d",ans);
		      break;
	     case 2:
		      ans=a-b;
		      printf("\nSubration : %d",ans);
		      break;
	     case 3:
		      ans=a*b;
		      printf("\nMultiplication : %d",ans);
		      break;
	     case 4:
		      ans=a/b;
		      printf("\nDivision : %d",ans);
		      break;
	     default:
		      printf("\nInvalid choice");
		      break;
	}
	printf("\n******************************************\n");
	getch();
}



