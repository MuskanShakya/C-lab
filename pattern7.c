#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=64+i;
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=n;k>=i;k--)
		{
		
		printf("%c",l);
		l++;
		}
		printf("\n");
	}
}
