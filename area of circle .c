#include <stdio.h>
int main() {
    float radius,area;
    printf("enter radius of circle:");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("area of circle:%.2\n",area);
    return 0;
}
