#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100],temp;
	int i,j;
	clrscr();
	printf("\n Enter a string : ");
	gets(str);
	j=strlen(str)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("\n Reversed string :%s",str);
	getch();
}