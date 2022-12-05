#include<stdio.h>
int main()
{
    const float pi=3.14;
    float r, h, sa, v;
    printf("Enter radius and height of cylinder \n");
    scanf("%f %f", &r, &h);
    v = pi*r*r*h;
    sa = 2*pi*r*(r+h);
    printf(" the volume is = %f \n", v);
    printf(" the surface area is = %f", sa);
    return 0;
}
