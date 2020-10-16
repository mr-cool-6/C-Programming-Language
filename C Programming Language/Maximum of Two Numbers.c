#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the First values:");
    scanf("%d",&a);
    printf("Enter the Second values:");
    scanf("%d",&b);
    if (a>b)
    printf("First number is Maximum",a);
    if (a=b)
    printf("Both First and Second numbers are Equal",a,b);
    else
    printf("Second number is Maximum",b);
    return 0;
}

