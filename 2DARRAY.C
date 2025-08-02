#include<stdio.h>
#include<conio.h>

void main()
{
   int a[3][3],b[3][3],c[3][3],i,j;
   clrscr();
   printf("\nEnter 2D Array A:\n");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
		printf("Enter %d row & %d column :",i,j);
		scanf("%d",&a[i][j]);
	  }
   }
   printf("\n2D Array A\n");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
	       printf("\t%d",a[i][j]);
	  }
	  printf("\n");
   }
   printf("\nEnter 2D Array B:");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
		printf("Enter %d row & %d column :",i,j);
		scanf("%d",&b[i][j]);
	  }
   }
   printf("\n2D Array B\n");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
	       printf("\t%d",b[i][j]);
	  }
	  printf("\n");
   }
   printf("\nEnter 2D Array C:");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
		c[i][j]=a[i][j]+b[i][j];
	  }
   }
   printf("\n2D Array C\n");
   for(i=0;i<3;i++)
   {
	  for(j=0;j<3;j++)
	  {
	       printf("\t%d",c[i][j]);
	  }
	  printf("\n");
   }
   getch();
}