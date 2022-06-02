//with argument no return value
#include<stdio.h>
void sum(int,int);
void main()
{
	int a,b;
	printf("Enter a and b-");
	scanf("%d %d",&a,&b);
	sum(a,b);
	sum(5,6);
	sum(a,6);
	sum(5,b);
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("%d ",c);
}

