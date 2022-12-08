#include<stdio.h>
void sum(int i)
{
    int n, sum=0;
    printf("Enter the n natural number");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum is %d \n", sum);
}
void allnum(int i)
{
    int r1, r2, sum=0;
    printf("Enter the range: from .. to ..?\n");
    scanf("%d %d", &r1, &r2);
    for(i=r1;i<=r2;i++)
    {
        sum+=i;
    }
    printf("The sum is %d \n", sum);
}
void oddevenseparate(int i)
{
    int r1, r2, sumeven=0, sumodd=0;
    printf("Enter the range: from .. to ..?\n");
    scanf("%d %d", &r1, &r2);
    for(i=r1;i<=r2;i++)
    {
        if(i%2==0)
        {
            sumeven+=i;
        }
        else{
            sumodd+=i;
        }
    }
    printf("The sum of even digits inside the range is %d \n", sumeven);
    printf("The sum of odd digits inside the range is %d \n", sumodd);
}
void fact(int facto, int n)
{
    if(n>=1)
    {
        fact(facto*n, n-1);
    }
    else{
        printf("The factorial is %d", facto);
    }
}
#include<stdio.h>
void sum(int i)
{
    int n, sum=0;
    printf("Enter the n natural number");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum is %d \n", sum);
}
void allnum(int i)
{
    int r1, r2, sum=0;
    printf("Enter the range: from .. to ..?\n");
    scanf("%d %d", &r1, &r2);
    for(i=r1;i<=r2;i++)
    {
        sum+=i;
    }
    printf("The sum is %d \n", sum);
}
void oddevenseparate(int i)
{
    int r1, r2, sumeven=0, sumodd=0;
    printf("Enter the range: from .. to ..?\n");
    scanf("%d %d", &r1, &r2);
    for(i=r1;i<=r2;i++)
    {
        if(i%2==0)
        {
            sumeven+=i;
        }
        else{
            sumodd+=i;
        }
    }
    printf("The sum of even digits inside the range is %d \n", sumeven);
    printf("The sum of odd digits inside the range is %d \n", sumodd);
}
void fact(int facto, int n)
{
    if(n>=1)
    {
        fact(facto*n, n-1);
    }
    else{
        printf("The factorial is %d", facto);
    }
}
int main()
{
    int i=1, facto=1, n;
    sum(i);
    allnum(i);
    oddevenseparate(i);
    printf("Enter number \n");
    scanf("%d", &n);
    fact(facto, n);
    return 0;
}