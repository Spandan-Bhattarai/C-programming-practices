#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n, fact=1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("%d", facto(n, fact));
    getch();
}
int facto(int n, int fact)
{
    if(n>0)
    {
        fact=fact*n;
        facto(n-1, fact);
    }
    else{
        return fact;
    }
}
