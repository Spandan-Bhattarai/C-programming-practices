#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float r,  v;
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    v= (4.0/3.0)*pi*pow(r,3);
    printf(" the volume is = %f", v);
    return 0;
}
