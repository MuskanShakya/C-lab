#include<stdio.h>
int main()
{
	int n,i,e,pos,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n];
	printf("Enter the elements-");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element and position");
	scanf("%d %d",&e,&pos);
	for(i=m-1;i>=pos;i--)
	{
	
		a[i+1]=a[i];
	}
		a[pos]=e;
		m++;
	
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
		
	}
}
