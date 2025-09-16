#include<stdio.h>
#include<conio.h>

void main()
{
	int num,sum=0,digit;
	clrscr();
	printf("\n Enter a Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		sum+=digit;
		num/=10;
	}
	printf("\n Sum of digit :%d", sum);
	getch();
}