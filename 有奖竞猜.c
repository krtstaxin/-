#include <stdio.h>
int main()
{
	int sum=777,i;
	char v,x;
	char a[]={'v','x','v','x','v','x','v','x','v','x','v','x','v','v','x'};
	for(i=0;i<15;i++)
	{
		if(a[i]=='v')
		sum*=2;
		if(a[i]=='x')
		sum-=555;
	}
	printf("%d",sum);
}
