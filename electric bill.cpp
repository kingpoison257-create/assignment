#include <stdio.h>

// Function to calculate the electricity bill
float calculateElectricalBill(int units) {
	float bill = 0;
	if (units <= 100) {
		bill = units * 10;
	}
	else if (units <= 200) {
		bill = (100 * 10) + (units - 100) * 15;
	}
	else {
		bill =(100 * 10) + (100 * 15) + (units - 200) * 20;
		}
		return bill;
}

int main() {
	int units;
	float totalBill;
	
	printf("Enter the number of units consumed: ");
	scanf("%d",&units);
	
	totalBill = calculateElectricalBill(units);
	
	printf("Total electricity bill = KSh. %.2f\n", totalBill);
	
	return 0;
}