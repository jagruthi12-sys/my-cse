# include <stdio.h>
int main() {
    float length,width,area;
    printf("enter length of rectangle:");
    scanf("%f",&length);
    printf("enter width of rectangle:");
    scanf("%f",&width);
    area=length*width;
    printf("Area of rectangle: %.2f\n",area);
    return 0;
}
