#include <iostream.h>
#include <conio.h>
#include <string.h>

int main() {
    clrscr();

    char str[100];
    int i, len, flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "The string is a Palindrome.";
    else
        cout << "The string is NOT a Palindrome.";

    getch();
    return 0;
}
