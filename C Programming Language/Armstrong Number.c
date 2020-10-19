#include<stdio.h>
int main ()
{
    int r, n, c, sum=0,temp;
    printf("Enter the value: ");
    scanf("%d",&n);
    temp=n;
    
    while (n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
        
    }
    n= temp;
    if (n==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
}
