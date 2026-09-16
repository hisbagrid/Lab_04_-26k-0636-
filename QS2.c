#include <stdio.h>
int main (){
    int number;
    printf("A small-sized pizza has a base price of $8. \n");
    printf("Enter number of pizzas you want:\n");
    scanf("%d", &number);
    if (number>1) {
        printf("Check our multi-pizza deals.\n");
    }
    else{
        printf("'Your total is $8.\n");
    }
    return 0;
}