#include <stdio.h>
int main (){
    float total;
    float fulfillment;
    float new_total;
    printf("Enter the order total: \n");
    scanf("%f",&total);
    printf("Choose Fulfillment Option (1. Pickup, 2. Delivery):\n");
    scanf("%d", &fulfillment);
    if (fulfillment==2) {
        new_total=total+3.00;
        printf("Your total is: %f\n", new_total);
    }
    else{
        printf("Your total is:%f\n", total);
    }
    return 0;
}