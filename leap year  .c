# include <stdio.h>
int year;
int main() {
    printf("enter a year:");
    scanf("%d",&year);
    if((year % 4 ==0&&year%100!=0)|| (year %400==0)){
        printf("%d is a leao year,year");
    }
    else{
        printf("%d is not a leap year",year);
    }
    }
