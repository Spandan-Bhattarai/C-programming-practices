#include<stdio.h>
int main()
{
    int n, low, high, c=0, i, j, sum =0, count =0;
    printf("Enter the ranges: \n");
    scanf("%d %d", &low, &high);
    for(i=low; i<=high; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c>2)
        {
            sum=sum+i;
            count++;
        }
        c=0;
    }
    printf("The sum of prime numbers between %d and %d is %d \n", low, high, sum);
    float average=(sum/count);
    printf("The avaerage of prime numbers is %f",  average);
    return 0;
}
