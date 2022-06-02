#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int l,i;
    printf("Enter the string in lowercase-");
    scanf("%s",&a);
    l=strlen(a);
    //strupr(a);
    //printf("String in upper case- %s",a);
    for(i=0;i<l;i++)
    {
        a[i]=a[i]-32;
    }
    printf("String in uppercase-%s",a);


}