#include<stdio.h>
int main()
{
    int i, r1, r2, sumeven=0, sumodd=0;
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
