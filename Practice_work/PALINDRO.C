#include<stdio.h>
#include<conio.h>

void main()
{
	int num,reversed=0,original,remainder;
	clrscr();
	printf("\n Enter a Number : ");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		remainder=num%10;
		reversed=reversed*10+remainder;
		num/=10;
	}
	if(original==reversed)
	{
		printf("\n %d is palindrome.",original);
	}
	else
	{
		printf("\n %d is not palindrome.",original);
	}
	getch();
}