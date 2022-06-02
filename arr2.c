#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
		
	}
	printf("\nThe negative  elements are ");
	for(i=0;i<n;i++)
	{
	
		if(a[i]<0)
		printf("%d ",a[i]);
	}
	return 0;
}

