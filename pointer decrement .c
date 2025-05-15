#include <stdio.h>
int main ()
{
    int arr[]={10,20,30,40,50};
    int *ptr = arr;
    printf("intial value:%d\n",*ptr);
    ptr++;
    printf("value after increment: %d\n",*ptr);
    ptr++;
    printf("value after second increment:%d\n",*ptr);
    ptr=arr;
    for(int i=0; i<5;i++){
        printf("element %d:%d\n",i,*ptr);
        ptr++;
    }
    return 0;
}
    
