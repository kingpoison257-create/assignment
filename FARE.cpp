#include <stdio.h>

int calculateFare(int distance) {
	int fare = distance * 50;
	return fare;
}

int main() {
	// Example usage:
	int disstance = 10;
	int totalFare = calculateFare(distance);
	printf("The fare for a distance of %d km is %d KSh.\n", distance);
	
	return 0;
}