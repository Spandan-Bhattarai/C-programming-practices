#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%5==0 && n%11==0)
        printf("\nIt's divisible");
    else
        printf("\nNot divisible");
    getch();
}
