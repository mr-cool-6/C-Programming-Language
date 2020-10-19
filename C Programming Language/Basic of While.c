#include<stdio.h>
int main ()
{
	int i=0;
	while (i<=5)
	{
		++i;
		if (i==3)
		continue;
		printf("%10d",i);
	}
	return 0;
}
