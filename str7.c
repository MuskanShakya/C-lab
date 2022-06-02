#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,l;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='A' || a[i]<='Z')
        a[i]=a[i]+32;
        
    }
    printf("String in lower case %s",a);
}