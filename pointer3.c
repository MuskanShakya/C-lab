#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n], (*p)[n]=a; //pointer of array
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
