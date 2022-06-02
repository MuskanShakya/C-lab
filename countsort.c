#include<stdio.h>
int main()
{
	int n,i,max;
	scanf("%d",&n);
	int a[n],b[100]={0};
	printf("Enter the elements-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
		
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	max++;
	//int b[max]={0};
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<max;i++)
	{
		if(b[i]>0)
		printf("\n%d=%d\n",i,b[i]);
	}
}
