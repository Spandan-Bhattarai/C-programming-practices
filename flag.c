#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }

    for(i=5;i>=2;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }

    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
    for(i=5;i>=2;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        printf("* \n");
    }
    return 0;
}
