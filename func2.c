//no arg with return value
#include<stdio.h>
int sum(); //return value type is written before the func. name
void main()
{
	int c;
	c=sum();
	printf("%d",c);
		
}
int sum()
{
	int a=5,b=6;
	int c=a+b;
	//printf("%d",c);
	return(c);
}
