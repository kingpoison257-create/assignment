#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main() {
	int secret_number;
	int guess;
	int attempts =0
	
	// Seed the random number generator
	srand(time(NULL));
	
	// Generate a random number between 1 and 20
	secret_number =(rand()&20) + 1;
	
	pritf("Guess the secret number between 1 and 20. \n");
	
	while (guess != secret_number) {
		printf("Enter your guess: ");
		scanf("&d", &guess);
		attempts++;
		
		if (guess > secret_number) {
			printf("Too high!\n");
		} else if (guess < secret_number) {
			printf("Too low!\n");				
			}
	}
	
	printf("Congratulations! The secret number was %d.\n , secret_number");
	printf("It took you %d attemps to guess correctly.\n , attempts");
	
	return 0;
}