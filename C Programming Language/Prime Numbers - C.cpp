#include<stdio.h>
int main()
{
	int i, j, n, c=0;
	printf("Enter Limit: ");
	scanf("%d",&n);
	
	for (i=2; i<=n; i++)
	{ 
	 c=0;
	 for (j=2; j<=i/2; j++)
	 {
	 	if(i%j==0)
	 	{
	 		c=1;
	 		break;
		 }
	 }
	 if (c==0)
	 printf("% d",i);
	}
	return 0;
}
