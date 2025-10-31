/*
Name:Rajabu Gabriel Kereto
Reg No:28736
Date:29/10/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int chain[3][5][10]; // 3D array: 3 branches, 5 floors, 10 rooms
	int totalOccupied = 0;
	
	// Initialize random number generator
	srand(time(0));
	
	// Assign random occupancy (1 = occupied, 0 = empty)
	for (int b = 0; b < 3; b++) {          // Branches
		for(int f = 0; f < 5; f++) {       // Floors
			for (int r = 0; r < 10; r++) { // Rooms
				chain[b][f][r] = rand() % 2;  // Random 0 or 1
			totalOccupied += chain[b][f][r];
			}
		}
	}
	
	// Display total number of occupied rooms
	printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
	
	return 0;
}