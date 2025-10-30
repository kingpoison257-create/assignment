#include <stdio.h>
#include <string.h>

int main(){
	char password[50];
	
	 do {
	 	printf("Enter the password: ");
	 	scanf("%s", password):
	 } while(strcmp(password, "1234") != 0);
	 
	 printf("Access Granted\n");
	 
	 return 0;
}