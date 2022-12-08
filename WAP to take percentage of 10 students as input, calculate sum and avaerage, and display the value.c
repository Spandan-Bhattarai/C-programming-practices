#include<stdio.h>
void main()
{
    float n[10], sum;
    printf("Enter percentage of 10 students: \n");
    for(int i=0; i<10; i++)
    {
        scanf("%f", &n[i]);
        sum=sum+n[i];
    }
    printf("The sum is %f", sum);
    printf("The average is %f", sum/10);
}
