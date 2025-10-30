*/
Name:Rajabu Gabriel Kereto
Reg:28736
Description: A c program to show water bill
Date:1st october 2025
*/
#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 23.0);
    } else {
        bill = (30 * 20.0) + (30 * 23.0) + ((units - 60) * 30.0);
    }

    printf("Total bill: %.2f KES\n", bill);

    return 0;
}