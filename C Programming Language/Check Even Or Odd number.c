#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2==0)
    printf("This is Even number",n);
    else 
    printf("This is odd number",n);
    return 0;
}
