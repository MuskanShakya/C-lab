#include<stdio.h>
int main()
{
	int n,i,e=0,o=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		e=e+1;
		else
		o=o+1;
	}
	printf("No of even elements are %d",e);
	printf("\nNo of odd elements are %d",o);
	
	return 0;
}
