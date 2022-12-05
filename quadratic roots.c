#include<stdio.h>
#include<math.h>
void main()
{
    int in_root,a,b,c;
    float root1, root2;
    printf("Enter coff. of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    in_root = b*b - 4* a * c;
    root1 = (-b + sqrt(in_root)) / (2 * a);
    root2 = (-b - sqrt(in_root)) / (2 * a);
    printf("root1 = %f and root2 = %f", root1, root2);
    getch();
}
