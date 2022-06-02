#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],t;
	int l,i;
	printf("Enter first string-");
	scanf("%[^\n]",&a);
	scanf("%c",&t);
	printf("Enter second string-");
	scanf("%[^\n]",&b);
	l=strlen(a);
	
	for(i=0;b[i]!='\0';i++)
	{
		a[l]=b[i];
		l++;
	}
	b[i]='\0';
	printf("After Concatenation-%s",a);
	return 0;
}

