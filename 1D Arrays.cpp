/*
//Name:Rajabu Gabriel Kereto
//Reg:28736
//Date:30 octber 2025
*/
#include <stdio.h>

int main() {
	// 1D array to store daily revenue for 7 days
	float revenue[7];
	float total_revenue = 0.0;
	float average_revenue;
	int i;
	
	//input revenue for each day
	printf("Enter the revenue for each day of the week:\n");
	for (i = 0; i < 7; ++i) {
		printf("Day %d: ", i + 1);
		scanf("%f", &revenue[i]);
	}
	
	// Calculate the total weekly revenue
	for (i = 0; i < 7; ++i) {
		total_revenue += revenue[i];
	}
	
	// Calculate the average daily revenue
	average_revenue = total_revenue / 7;
	
	// Display the results
	printf("\n--- Weekly Revenue Report ---\n");
	printf("Total weekly revenue: %.2f\n", total_revenue);
	printf("Average daily revenue: %.2f\n", average_revenue);
	
	return 0;
}
	
