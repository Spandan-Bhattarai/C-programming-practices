#include<stdio.h>
void main()
{
    int n, rem,rev=0, tmp;
    printf("Enter any 3 digit number: ");
    scanf("%d", &n);
    tmp=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(tmp==rev)
    {
        printf("yes it's an palindrome number");
    }
    else{
        printf("no it's not an palindrome number");
    }
}
