#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int *p,*q,temp;
	char *t;
	float *f;
	p=&a;
	q=&b;
	temp=p;
	p=q;
	q=temp;
	printf("a=%d b=%d",*p,*q);
	printf("\n%d",sizeof(*p));
	printf("\n%d",sizeof(*t));
	printf("\n%d",sizeof(*f));
	return 0;
}


