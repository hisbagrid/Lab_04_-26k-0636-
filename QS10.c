#include <stdio.h>

int main() {
    int size;
    int quantity;
    float cost;
    int crustType;
    char ans;      // cheese choice
    char std_id;   // student id
    int c_time;
    int fulfillment;
    float total;

    // Step 1: pizza size + count 
    printf("1. Small\n");
    printf("2. Medium\n");
    printf("3. Large\n");
    printf("Select the size option: ");
    scanf("%d", &size);

    if (size < 1 || size > 3) {
        printf("Invalid! Please enter a number between 1-3\n");
        return 0;
    }

    printf("Enter number of pizzas you want (1-3): ");
    scanf("%d", &quantity);

    if (quantity < 1 || quantity > 3) {
        printf("Invalid! Please enter a number between 1-3\n");
        return 0;
    }

    // Step 2: dynamic base pricing 
    if (quantity == 1) {
        cost = 8;
    } else if (quantity == 2) {
        cost = 15;
    } else if (quantity == 3) {
        cost = 21;
    }
    total = cost;

    // Step 3: crust type fee 
    printf("Crust type choice:\n1 for regular.\n2 for Thin.\n3 for Stuffed\n");
    scanf("%d", &crustType);

    if (crustType == 1) {
        total = total + 0;
    } else if (crustType == 2) {
        total = total + 1;
    } else if (crustType == 3) {
        total = total + 2;
    } else {
        printf("Invalid! choose number between 1-3\n");
    }

    printf("Do you want extra cheese (Y/N)?: ");
    scanf(" %c", &ans);

    if (ans == 'Y' || ans == 'y') {
        total = total + 1.50;
    } else if (ans == 'N' || ans == 'n') {
        total = total;
    } else {
        printf("Invalid letter, choose 'Y' or 'y' for yes and 'N' or 'n' for no.\n");
    }

    // Step 4: Happy Hour discount 
    printf("Enter the current hour (0-23): ");
    scanf("%d", &c_time);

    if (c_time >= 11 && c_time <= 14) {
        total = total - (total * 0.10);
    }

    // Step 5: student discount 
    printf("Do you have a student id? (Y/N): ");
    scanf(" %c", &std_id);

    if (std_id == 'Y' || std_id == 'y') {
        total = total - 2.00;
    }

    if (total < 0) {
        total = 0.00;
    }

    // Step 6: garlic bread bonus 
    if (quantity == 3 && crustType == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("Thank you for your order!\n");
    }

    // Step 7: delivery fee 
    printf("Choose Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillment);

    if (fulfillment == 2) {
        total = total + 3.00;
    }

    // Step 8: itemized invoice
    printf("\n----- Invoice -----\n");
    printf("Pizza size selected: %d\n", size);
    printf("Pizza quantity: %d\n", quantity);
    printf("Base cost: $%.2f\n", cost);
    printf("Crust type: %d\n", crustType);
    printf("Extra cheese: %c\n", ans);
    printf("Order hour: %d\n", c_time);
    printf("Student ID: %c\n", std_id);
    printf("Fulfillment option: %d\n", fulfillment);
    printf("Final Total: $%.2f\n", total);

    return 0;
}