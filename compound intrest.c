#include<stdio.h>
#include<math.h>
int main()
{
    float p, t, r, n, CI,CA;
    printf("Enter principal, time, rate and number of times intrest is compounded annulally: \n");

    scanf("%f %f %f %f", &p, &t, &r, &n);
    CA = p*pow((1+r/(100*n)),(n*t));
    CI=CA-p;
    printf("The interest is = %f", CI);
    return 0;
}
