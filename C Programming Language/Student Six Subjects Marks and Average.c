#include<stdio.h>
int main ()
{
	float a,b,c,d,e,f,x,y;
	printf("enter the sub1 : ");
	scanf("%f",&a);
	printf("enter the sub2 : ");
	scanf("%f",&b);
	printf("enter the sub3 : ");
	scanf("%f",&c);
    printf("enter the sub4 : ");
	scanf("%f",&d);
	printf("enter the sub5 : ");
	scanf("%f",&e);
	printf("enter the sub6 : ");
	scanf("%f",&f);
	x=(a+b+c+d+e+f);
	y=(float)(x/6);
	printf("total :%f",y);
	return 0;	
}
