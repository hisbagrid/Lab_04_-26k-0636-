#include <stdio.h>
int main(){
    float total;
    char std_id;
    float new_total;
    printf("Enter the current total bill:");
    scanf("%f",&total);
    printf("Do you've student id?:");
    scanf(" %c",&std_id);
    if (std_id=='Y' || std_id=='y'){
        new_total=total-2.00;
    }
    else {
        printf("No discount available");
    }
    printf("Discounted total=%.2f", new_total);
    if (new_total<0){
        new_total=0.00;
    }
    else{
        new_total=new_total;
    }
    printf("Your bil:%.2f", new_total );
return 0;
}