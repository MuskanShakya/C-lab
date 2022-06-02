#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		count=count+1;
	}
	printf("No of negative elements are %d",count);
	return 0;
}
