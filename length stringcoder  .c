#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    printf("enter name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length = strlen(name);
    printf(name ,"appa");
    printf("%s\n",name);
    int cmp=strcmp("manjunath","manju");
    printf("%d\n",cmp);
    strcat(name,"coder");
    printf("%s\n",name);
}
    
