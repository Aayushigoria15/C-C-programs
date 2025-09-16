#include <iostream.h>
#include <conio.h>
#include <stdio.h>  

void main() {
    char name[50];
    int age;

    clrscr();
    cout << "Enter your name: ";
    gets(name);   

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old.";
    getch();
}
