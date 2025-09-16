#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int n, i;
    int arr[100]; 
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    getch();
    return 0;
}
