#include <stdio.h>
int main()
{
    int n, i,j ;
    printf("Enter the number of integers to be inputted: ");
    scanf("%d", &n);

    int num[n], tmp;
    printf("Enter the integers \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                tmp=num[i];
                num[i]=num[j];
                num[j]=tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d \n", num[i]);
    }
    return 0;
}
