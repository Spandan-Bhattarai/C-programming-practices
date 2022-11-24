#include<stdio.h>
#include<math.h>
void main()
{
    int x=2, y=3;
    (x ^= y), (y ^= x), (x ^= y);
    printf("%d %d", x, y);

}

