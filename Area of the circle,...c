//programme to calculate area of a circle
#include<stdio.h>

int main()
{
int r;
float pi=3.142,area;
    printf("enter radius of a circle");
    scanf("%d", &r);
    area=pi*r*r;
    printf("area of circle=%f",area);
    return 0;
}
