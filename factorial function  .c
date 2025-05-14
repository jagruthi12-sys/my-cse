#include <stdio.h>
int i,fact;
int jeeva_fact(int n,int fact)
{
    if(n==0){
        return 1;
    }
    else if(n<0){
        printf("enter positive number");
    }
    else{
        for(i=1;i<=n;i++){
            fact *=i;
        }
    }
    return fact;
}
int main(){
    int c;
    c=jeeva_fact(5,4);
    printf("%d",c);
}
        
