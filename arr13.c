#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int arr1[n];
	printf("arr1-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		printf("%d ",arr1[i]);
	}
	int m;
	scanf("%d",&m);
	int arr2[m];
	printf("arr2-");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
		printf("%d ",arr2[i]);
	}
	int arr3[m+n];
	printf("arr3-");
	for(i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
		printf("%d ",arr3[i]);
	}
	k=i;
	for(i=0;i<m;i++)
	{
		arr3[j]=arr2[k];
		k++;
		printf("%d ",arr3[j]);
	}
	
}
