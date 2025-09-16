#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,sum=0;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<10;i++)
	{
		printf("Enter %d Element : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nSum : %d",sum);
	printf("\nArray Elements Are\n");
	for(i=0;i<10;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	getch();
}