#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float p, t, r, n, CI,CA;
    printf("Enter principal, time, rate and number of times intrest is compounded annulally: \n");

    scanf("%f %f %f %f", &p, &t, &r, &n);
    CA = p*pow((1+r/n),(n*t));
    CI=CA-p;
    printf("The interest is = %f", CI);
    getch();
};
