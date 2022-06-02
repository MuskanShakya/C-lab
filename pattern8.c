#include<stdio.h>
int main()
{
	int i,j,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=65;
		for(j=n;j>=i;j--)
		{
			printf("%c",l);
			l++;
		}
		printf("\n");
	}
}
