#include <iostream.h>
#include <conio.h>

class BankAccount {
private:
    float balance;

public:
   
    BankAccount(float initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0.\n";
        } else {
            balance = initialBalance;
        }
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() {
    clrscr();

    float initial;
    cout << "Initial balance: 0";

    BankAccount account(initial);  
    int choice;
    float amount;

    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    getch();
    return 0;
}
