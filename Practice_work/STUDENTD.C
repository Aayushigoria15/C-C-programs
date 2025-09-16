#include <stdio.h>
#include <conio.h>

struct Student {
    int rno, s1, s2, s3, total;
    double per;
    char sname[50];
};

int main() {
    struct Student s[3];
    int i;
    clrscr();

    printf("Enter details of 3 students:\n");
    for(i = 0; i < 3; i++) {
	fflush(stdin);

	printf("\nEnter Name of Student: ");
	gets(s[i].sname);

	printf("Roll Number: ");
	scanf("%d", &s[i].rno);

	printf("Marks of sub 1: ");
	scanf("%d", &s[i].s1);

	printf("Marks of sub 2: ");
	scanf("%d", &s[i].s2);

	printf("Marks of sub 3: ");
	scanf("%d", &s[i].s3);

	s[i].total = s[i].s1 + s[i].s2 + s[i].s3;
	s[i].per = s[i].total / 3.0;

	printf("\n--- Student %d Details ---", i+1);
	printf("\nName       : %s", s[i].sname);
	printf("\nRoll Number: %d", s[i].rno);
	printf("\nTotal      : %d", s[i].total);
	printf("\nPercentage : %.2lf\n", s[i].per);
    }

    getch();
    return 0;
}
