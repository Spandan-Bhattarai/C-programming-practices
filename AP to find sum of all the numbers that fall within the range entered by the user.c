#include<stdio.h>
int main()
{
    int i, r1, r2, sum=0;
    printf("Enter the range: from .. to ..?\n");
    scanf("%d %d", &r1, &r2);
    for(i=r1;i<=r2;i++)
    {
        sum+=i;
    }
    printf("The sum is %d \n", sum);
}
