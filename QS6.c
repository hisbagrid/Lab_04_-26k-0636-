#include <stdio.h>
int main(){
    float c_total;
    int c_time;
    float d_total;
    printf("Enter you current total bill:");
    scanf("%f", &c_total);
    printf("Enter you current time:");
    scanf("%d",&c_time);
    if (c_time>=11 && c_time<=14) {
        d_total=c_total-0.1;
        printf("Your Discounted total is:%.2f", d_total);
    }
    else{
        printf("Your Original Total is:%.2f", c_total);
    }
    return 0;
}
