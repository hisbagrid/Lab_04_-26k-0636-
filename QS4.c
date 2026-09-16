#include <stdio.h>
int main (){
    int total;
    int updated_bill;
    int choice;
    printf("Enter the current total cost of the order: ");
    scanf("%d", &total);
    printf("crust type choice:\n1 for regular.\n2 for Thin.\n3 for Stuffed\n");
    scanf("%d",&choice);
    if (choice==1){
        updated_bill= total+ 0;
    }
    else if (choice==2){
        updated_bill=total+1;
    }
    else if (choice==3){
        updated_bill=total+2;
    }
    else {
    printf("Invalid! choose number between 1-3");
    }
    printf("Updated bill total after adding surcharges: %d",updated_bill);
    return 0;
}