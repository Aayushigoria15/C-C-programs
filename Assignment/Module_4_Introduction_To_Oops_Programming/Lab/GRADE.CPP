#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float average;
    char grade;

    cout << "Enter marks of 5 subjects (out of 100):\n";
    cout << "Subject 1: "; cin >> sub1;
    cout << "Subject 2: "; cin >> sub2;
    cout << "Subject 3: "; cin >> sub3;
    cout << "Subject 4: "; cin >> sub4;
    cout << "Subject 5: "; cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5.0;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average = " << average << endl;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade = " << grade << endl;

    getch();
    return 0;
}
