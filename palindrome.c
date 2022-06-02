#include<stdio.h>
int main()
{
	int n,m,sum=0,r;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==m)
	printf("palindrome");
	else
	printf("not");
}
