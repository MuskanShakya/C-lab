#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("b=[ ");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
	printf("]");
	return 0;
}

