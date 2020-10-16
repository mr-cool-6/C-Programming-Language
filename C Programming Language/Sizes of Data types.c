#include<stdio.h>
int main ()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;
    printf("size of int: %d bytes \n", sizeof (intType));
    printf("size of char: %d bytes \n", sizeof (charType));
    printf("size of float: %d bytes \n", sizeof (floatType));
    printf("size of double: %d bytes \n", sizeof (doubleType));
    return 0;
}
