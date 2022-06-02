#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int l,i;
	printf("Enter the string ");
	scanf("%[^\n]",a);
	//l=strlen(a);
	//printf("%d",l);
	for(i=0;a[i]!='\0';i++);
	l=i;
	
	printf("The length of string is %d",l);
    return 0; 
	
}
