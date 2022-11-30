void fact(int facto, int n)
{
    if(n!=0)
    {
        fact(facto*n, n-1);
    }
    else{
        printf("The factorial is %d", facto);
    }
}
int main()
{
    int facto=1, n;
    printf("Enter number \n");
    scanf("%d", &n);
    fact(facto, n);
    return 0;
}
