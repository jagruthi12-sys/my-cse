#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum=%d\n",a+b);
    printf("diffrence=%d\n",a-b);
    printf("product=%d\n",a*b);
    if(b!=0)
    printf("quotient=%d\n",a/b);
    else
    printf("division by zero is not allowed.\n");
    return 0;
}
