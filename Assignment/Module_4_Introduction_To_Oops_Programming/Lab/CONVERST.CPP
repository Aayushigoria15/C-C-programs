#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int a ;
    float b;
    char c;
    cout<<"\nenter a:";
    cin>> a;
    cout<<"\nenter b:";
    cin>> b;
    cout<<"\nenter c:";
    cin>> c;
    // Implicit conversion (automatic)
    float result1 = a + b;
    int result2 = c + a;

    cout << "Implicit conversions:" << endl;
    cout << "a + b = " << result1 << " (int + float -> float)" << endl;
    cout << "c + a = " << result2 << " (char 'A' -> int 65, then added to a)" << endl;

    // Explicit conversion (type casting)
    float result3 = (float)a / 3;
    char result4 = (char)(97);

    cout << "\nExplicit conversions:" << endl;
    cout << "a / 3 = " << result3 << " (a converted to float)" << endl;
    cout << "97 as char = " << result4 << endl;

    getch();
    return 0;
}
