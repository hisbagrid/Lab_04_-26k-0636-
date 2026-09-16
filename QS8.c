#include <stdio.h>
int main (){
    int pizza_number;
    int crustType;
    printf("Enter number of pizzas you want:\n");
    scanf("%d", &pizza_number);
    printf("Enter crust type (3 for Stuffed): ");
    scanf("%d", &crustType);
    if (pizza_number==3 && crustType==3) {
        printf("You get free garlic bread!\n");
    }
    else{
        printf("Thank you for your order!");
    }
    return 0;
}