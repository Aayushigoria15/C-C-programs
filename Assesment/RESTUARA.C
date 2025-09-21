#include <stdio.h>
#include <conio.h>

void showMenu() {
    printf("===============================================================================\n");
    printf("                              FOOD BILLING SYSTEM\n");
    printf("===============================================================================\n");
    printf("Code\tItem\t\tPrice (INR)\n");
    printf("----------------------------------------\n");
    printf(" 1\tVeg Pizza\t120\n");
    printf(" 2\tBurger\t\t80\n");
    printf(" 3\tPasta\t\t90\n");
    printf(" 4\tFrench Fries\t60\n");
    printf(" 5\tCold Drink\t40\n");
    printf(" 6\tSandwich\t70\n");
    printf("----------------------------------------\n");
}

int main() {
    int code, qty;
    char more;
    float total = 0.0, price = 0.0;
    clrscr();

    do {
	showMenu();
	printf("\nEnter item code: ");
	scanf("%d", &code);
	switch (code) {
	    case 1: price = 120; break;
	    case 2: price = 80;  break;
	    case 3: price = 90;  break;
	    case 4: price = 60;  break;
	    case 5: price = 40;  break;
	    case 6: price = 70;  break;
	    default:
		printf("Invalid code! Try again.\n");
		continue;
	}
	printf("Enter quantity: ");
	scanf("%d", &qty);
	total += price * qty;
	printf("Current Total: Rs. %.2f\n", total);
	printf("Do you want to order more? (Y/N): ");
	scanf(" %c", &more);
	clrscr();
    }
     while (more == 'Y' || more == 'y');
    printf("\n===============================================================================\n");
    printf("                                 FINAL BILL\n");
    printf("===============================================================================\n");
    printf("Total Amount to Pay: Rs. %.2f\n", total);
    printf("===============================================================================\n");
    printf("                           Thank you for ordering!\n");
    getch(); 
    return 0;
}
