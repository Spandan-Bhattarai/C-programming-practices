#include<stdio.h>
void main()
{
    int p, t, r;
    printf("Enter principal, rate and time \n");
    scanf("%d %d %d", &p, &r, &t);
    float SI;
    SI= (p*t*r)/100;
    printf("%f", SI);
    return 0;
}
