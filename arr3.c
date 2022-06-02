#include<stdio.h>
int main()
{
	int n;
	printf("Enter thr size of array");
	scanf("%d",&n);
	int a[n],i,sum=0;
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nThe sum of all the elements of array is %d",sum);
	return 0;
}

