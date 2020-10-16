#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("This number is divisible by 5\n",n);
    }
    if (n%11==0)
    {
        printf("This numbero is divisible by 11\n",n);
    }
    
    if((n%5==0)&&(n%11==0))
    {
        printf("This number is divisibel by Both 5 and 11\n",n);
    }
    else
    printf("This numer is not divisible by 5 and 11",n);
    return 0;
}
