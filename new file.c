#include<stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter three sides of a trianlge \n");
    scanf("%d %d %d", &s1, &s2 , &s3);
    if(s1==s2&&s1==s3)
    {
        printf("equilateral");
    }
    else if( (s1==s2&&s1!=s3) || (s1==s3&&s1!=s2) || (s2==s3&&s1!=s2) )
    {
        printf("isoceles");
    }
    else{
        printf("scalene traigle");
    }
    return 0;
}
