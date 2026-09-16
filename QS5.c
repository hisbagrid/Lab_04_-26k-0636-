#include <stdio.h>
int main(){
    float current_total;
    char ans;
    float updated_total;
    printf("Enter the current total cost:");
    scanf("%f",&current_total);
    printf("Do you want extra cheese (Y/N)?:");
    scanf(" %c",&ans);
    if (ans=='Y' || ans=='y'){
        updated_total=current_total+ 1.50;
    }
    else if (ans== 'N'|| ans=='n'){
        updated_total=current_total;
    }
    else {
        printf("Invalid letter, choose 'Y' or 'y' for yes and 'N' or 'n' for no.");
    }
    printf("updated total=%f", updated_total);
return 0;
}