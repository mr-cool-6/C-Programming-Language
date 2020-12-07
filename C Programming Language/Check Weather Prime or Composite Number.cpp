#include<stdio.h>
int main ()
{
	int i, n, c=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0) 
			c+=1;
	}
	
	if(c==2)
		printf("Prime Number");
	
	else
		printf("Composite Number");
	return 0;
	
}
