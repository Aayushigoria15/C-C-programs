#include<stdio.h>
#include<conio.h>
void main()
{
  int rno,s1,s2,s3,total;
  double per;
  char sname[50];
  clrscr();
  printf("\nEnter Student Name:");
  gets(sname);
  printf("\nEnter Roll no:");
  scanf("%d", &rno);
  printf("\nEnter marks of sub 1: ");
  scanf("%d",&s1);
  printf("\nEnter marks of sub 2: ");
  scanf("%d",&s2);
  printf("\nEnter marks of sub 3: ");
  scanf("%d",&s3);
  total=s1+s2+s3;
  per=total/3;
  printf("\nStudent name: %s",sname);
  printf("\nRoll no: %d",rno);
  printf("\nTotal: %d", total);
  printf("\nPercentage %4f",per);
  if(per>=70)
  {
    printf("\nDistintion");
  }
  else if(per>=60)
  {
     printf("\nFirst class");
  }
  else if(per>=50)
  {
     printf("\nSecond class");
  }
  else if(per>=40)
  {
     printf("\n Pass");
  }
  else
  {
     printf("\nfail");
  }
  getch();
}