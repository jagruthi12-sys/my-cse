#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if (marks>=93)
    printf(" grade A");
    else if(marks>=72)
    printf("grade B");
    else if(marks>=54)
    printf("grade c");
    else
    printf("grade D");
    return 0;
}
