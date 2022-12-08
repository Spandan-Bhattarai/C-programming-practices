#include<stdio.h>
int main()
{
    int n,i, a=0, b=1,s;
    printf("Enter upto how many terms \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        s=a+b;
        a=b;
        b=s;
        printf("%d ", a);
    }
}
