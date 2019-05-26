#include <stdio.h>
int main()
{
	int i,x,sum;
	for(i=1;i<100;i++)
	{	
	x=i;
	sum=0;
	while(sum<236)
	{
		sum+=x;
		x++;		
	}	
	if(sum==236)
	printf("%d",i);
	}
}
