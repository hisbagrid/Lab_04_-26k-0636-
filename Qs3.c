#include <stdio.h>
int main () {
    int quantity;
    int cost;
    printf("1 pizza costs $8.\nA combo of 2 pizzas costs $15.\nA package of 3 pizzas costs $21. ");
    printf("Enter desired pizza quantity between 1-3:\n");
    scanf("%d", &quantity);
    
   if (quantity == 1) {
        cost = 8;
    } else if (quantity == 2) {
        cost = 15;
    } else if (quantity == 3) {
        cost = 21;
    } else {
        printf("Invalid, choose quantity between 1-3.\n");
        return 0;
    }
    printf("Quantity: %d, Final Package Total: $%d\n", quantity, cost);
    return 0;
}