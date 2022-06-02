#include<stdio.h>
int main()
{
	int n;
	printf("Enter thr size of array");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
	}
	return 0;
}

