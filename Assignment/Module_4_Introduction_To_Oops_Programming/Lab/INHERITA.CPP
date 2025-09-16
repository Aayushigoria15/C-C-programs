#include <iostream.h>
#include <conio.h>
#include <string.h>

class Person {
protected:
    char name[50];
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void inputStudent() {
        inputPerson();  
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        displayPerson(); 
        cout << "Roll Number: " << rollNo << "\n";
    }
};

class Teacher : public Person {
private:
    char subject[30];

public:
    void inputTeacher() {
        inputPerson(); 
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacher() {
        displayPerson(); 
        cout << "Subject: " << subject << "\n";
    }
};

int main() {
    clrscr();

    Student s;
    Teacher t;

    cout << "--- Enter Student Details ---\n";
    s.inputStudent();

    cout << "\n--- Enter Teacher Details ---\n";
    t.inputTeacher();

    cout << "\n--- Student Info ---\n";
    s.displayStudent();

    cout << "\n--- Teacher Info ---\n";
    t.displayTeacher();

    getch();
    return 0;
}
