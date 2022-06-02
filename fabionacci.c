#include<stdio.h>
int main()
{
	int n,a=0,b=1,result,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d,",a);
		result=a+b;
		a=b;
		b=result;
	}
}
