#include <stdio.h>

int main() {
	int balance = 500;
	int withdrawalAmount;
	
	while (balance > 0) {
		printf("Current balance: %d\n, balance");
		printf("Enter amount to withdraw: ");
		scanf("%d", &withdrawalAmount);
		
		if (withdrawalAmount > balance) {
			printf("Insufficient funds. withdrawal canceled.\n");
		} else {
			balance -= withdrawalAmount;
			printf("New balance: %d\n", balance);
			}
				
				printf("\n");
	}
	printf("Account balance is zero or negative. No more withdrawals.\n");
	return 0;
}