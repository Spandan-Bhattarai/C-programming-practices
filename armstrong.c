#include<stdio.h>
void main()
{
    int n, rem,arm=0, tmp;
    printf("Enter any 3 digit number: ");
    scanf("%d", &n);
    tmp=n;

    while(n!=0)
    {
        rem=n%10;
        arm=arm+pow(rem, 3);
        n=n/10;
    }
    if(tmp==arm)
    {
        printf("yes it's an armstrong number");
    }
    else{
        printf("no it's not an armstrong number");
    }
}
