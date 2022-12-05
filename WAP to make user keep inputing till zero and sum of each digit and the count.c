#include<stdio.h>
#include<stdbool.h>
void main()
{
    int s=0, c=0, n;
    bool value1=true;
    while(value1==true)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        s+=n;
        c++;
        if(n==0)
        {
            value1 = false;
        }
    }
    printf("%d is sum \n", s);
    printf("%d is count \n", c);
}
