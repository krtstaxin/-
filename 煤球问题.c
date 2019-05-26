#include <stdio.h>
int main()
{
	int i,sum=0,j;
	for(i=1;i<101;i++)
	{
		for(j=1;j<i+1;j++)
		sum+=j;
	}
	printf("%d",sum);
}
