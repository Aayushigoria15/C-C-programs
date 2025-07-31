#include<stdio.h>
#include<conio.h>

void main()
{
       int a[5],i,j,temp;
       clrscr();
       printf("\nEnter array elements\n");
       for(i=0;i<5;i++)
       {
	      printf("\nEnter %d Elements: ",i);
	      scanf("%d",&a[i]);
       }
       printf("\nArray elements are:\n");
       for(i=0;i<5;i++)
       {
	  printf("\nA[%d] = %d",i,a[i]);
       }
       for(i=0;i<5;i++)
       {
	    for(j=i+1;j<5;j++)
	    {
		  if(a[i]>a[j])
		  {
		       temp=a[i];
		       a[i]=a[j];
		       a[j]=temp;
		  }
	    }
       }
       printf("\nArray Elements are in descending order\n");
       for(i=0;i<5;i++)
       {
	       printf("\nA[%d] = %d",i,a[i]) ;
       }
       for(i=0;i<5;i++)
       {
	      for(j=i+1;j<5;j++)
	      {
		   if(a[i]<a[j])
		  {
		       temp=a[i];
		       a[i]=a[j];
		       a[j]=temp;
		  }
	    }
       }
       printf("\nArray Elements are in descending order\n");
       for(i=0;i<5;i++)
       {
	       printf("\nA[%d] = %d",i,a[i]) ;
       }
       getch();
}