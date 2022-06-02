#include<stdio.h>

int main()
{
	char a[100],b[100];
	int i;
	printf("Enter the string a-");
	scanf("%[^\n]",&a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("The copied string is %s",b);
	return 0;
}
