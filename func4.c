//with arguments and return value
#include<stdio.h>
int sum(int,int);
void main()
{

	int a,b;
	int c;
	printf("Enter a and b-");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("%d ",c);
	c=sum(5,6);
	printf("%d ",c);
	c=sum(a,6);
	printf("%d ",c);
	c=sum(5,b);
	printf("%d",c);
}


int sum(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}

