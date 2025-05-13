#include <stdio.h>
int main() {
    int num1,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second:");
    scanf("%d",&num2);
    if(num1>num2) {
        printf("%d is the largest number.\n",num1);
    }
    else if (num2 > num1)
    {
        printf("%d is the largest number.\n",num2);
    }
    else {
        printf("both numbers are equal.\n");
    }
    return 0;
}
