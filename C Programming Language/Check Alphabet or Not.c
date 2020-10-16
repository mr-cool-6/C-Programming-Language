#include<stdio.h>
int main ()
{
    char c;
    printf(" enter a character:");
    scanf("%c",&c);
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    printf("it is alphabit",c);
    else 
    printf("it is not a alphabit",c);
    return 0;
}

