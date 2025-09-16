#include<iostream.h>
#include<conio.h>

int main() {
    clrscr();
    int length, width, area;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    cout << "Area of rectangle = " << area;
    getch();
}
