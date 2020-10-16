#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter the second Number:");
    scanf("%d",&b);
    printf("Enter the Third number:");
    scanf("%d",&c);
    if (a>b)
    printf("a is big",a);
    if (b>c)
    printf("b is big",b);
    if (c>a)
    printf("c is big",c);
    return 0;
}
