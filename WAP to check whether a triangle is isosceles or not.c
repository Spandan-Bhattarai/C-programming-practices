#include<stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter three sides of a trianlge \n");
    scanf("%d %d %d", &s1, &s2 , &s3);
    if( (s1==s2) || (s1==s3) || (s2==s3) )
    {
        printf("isoceles");
    }
    else{
        printf("not isoceles traigle");
    }
    return 0;
}
