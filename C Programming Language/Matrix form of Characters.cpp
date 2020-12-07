#include<stdio.h>
int main()
{
	int i, j;
	char m='A';
	for (i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
			{
				printf("%5c",m++);
			}
		printf("\n");	
	}
}
