
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

class ATM {
    private:
	int pin;
	long balance;
    public:
	ATM() {
	    pin = 12345;
	    balance = 20000;   // Initial account balance
	}
    void showDetails() 
	{
            cout << "\nThe name of the Account Holder is: Rakesh Kharva";
            cout << "\nThe Account Holder's address is: Mumbai";
            cout << "\nThe Branch Location is: Andheri";
            cout << "\nAccount Number: 5678";
    }
	// Function to check PIN
	int checkPIN(int enteredPin) {
	    if (enteredPin == pin)
		return 1;
	    else
		return 0;
	}

	// Deposit function
	void deposit(long amount) {
	    balance += amount;
		showDetails();
	    cout << "\nAmount Deposited: Rs." << amount;
	    cout << "\nUpdated Balance: Rs." << balance;
	}

	// Withdraw function
	void withdraw(long amount) {
		showDetails();
	    if (amount > balance) {
		cout << "\nInsufficient Balance!";
		cout <<"\n Sorry";
		cout << "\nCurrent Balance: Rs." << balance;
	    } else {
		balance -= amount;
		cout << "\nAmount Withdrawn: Rs." << amount;
		cout << "\nRemaining Balance: Rs." << balance;
	    }
	}

	// Balance inquiry
	void showBalance() {
		showDetails();
	    cout << "\nYour Current Balance is: Rs." << balance;
	}
};

void displayDateTime() {
    time_t now;
    time(&now);
	int i;

    for(i=0;i<60;i++){
    cout<<"-";
    }
    cout << "\nCurrent Date and Time: " << ctime(&now);
    for(i=0;i<60;i++){
    cout<<"-";
    }
}

int main() {
    clrscr();
    ATM user;
    int choice, enteredPin;
    long amount;
    cout << "\n\n*****************************WELCOME TO ATM******************************\n\n";
    displayDateTime();
    cout << "\n1. Enter PIN";
    cout << "\n2. Help";
    cout << "\n3. Exit";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
	cout << "\nEnter ATM PIN (only one attempt): ";
	cin >> enteredPin;

	if (user.checkPIN(enteredPin)) {
	    // If PIN is correct = Menu
	    do {
		cout << "\n\n*****************************ATM MAIN MENU*****************************\n\n";
		cout << "\n1. Deposit Money";
		cout << "\n2. Withdraw Money";
		cout << "\n3. Check Balance";
		cout << "\n4. Exit";
		cout << "\nEnter your choice: ";
		cin >> choice;

		switch (choice) {
		    case 1:
			cout << "\nEnter amount to deposit: ";
			cin >> amount;
			user.deposit(amount);
			break;

		    case 2:
			cout << "\nEnter amount to withdraw: ";
			cin >> amount;
			user.withdraw(amount);
			break;

		    case 3:
			user.showBalance();
			break;

		    case 4:
			cout << "\nThank you for using ATM!";
			break;

		    default:
			cout << "\nInvalid Choice!";
		}
	    } while (choice != 4);
	} else {
	    cout << "\nIncorrect PIN! Exiting...";
	}
    }
    else if (choice == 2) {
	cout << "\nHelp Screen:";
	cout << "\n- Use PIN 12345 to access your account.";
	cout << "\n- You can Deposit, Withdraw, and Check Balance.";
	cout << "\n- Only one attempt is allowed for entering PIN.";
    }
    else {
	cout << "\nExiting the ATM. Thank you!";
    }

    getch();
    return 0;
}
