#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();   
    int age = 20;
    float height = 5.8;
    char grade = 'A';
    const double PI = 3.14159;

    cout << "Initial values:" << endl;
    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;
    cout << "Constant PI = " << PI << endl;

    age = age + 5;   
    height = height + 0.2; 
    grade = 'B';     
    cout << "\nAfter modification:" << endl;
    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;
    getch();  
    return 0;
}
