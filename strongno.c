#include<stdio.h>
int main()
{
	int n,m,r,sum=0,k;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		int f=1;
		for(k=1;k<=r;k++)
		{
			f=f*k;
		}
		sum=sum+f;
		n=n/10;
	}
	if(sum==m)
	printf("strong no");
	else
	printf("not");
}
