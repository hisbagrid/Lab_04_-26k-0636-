#include <stdio.h>
int main (){
int size;
printf("1.small\n");
printf("2.medium\n");
printf("3.large\n");
printf("Select the size option: ");
scanf("%d", &size);
switch (size) {
    case 1:
    printf("'Small size selected\n");
    break;
    case 2:
    printf ("medium size selected\n");
    break;
    case 3:
    printf ("large size selected\n");
    break;
    default:
    printf("invalid input! Please enter a number between 1-3\n");

}
return 0;
}