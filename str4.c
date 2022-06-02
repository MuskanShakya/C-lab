#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int v;
    printf("Enter first string-");
    scanf("%s",&a);
    printf("Enter the second string-");
    scanf("%s",&b);
    v=strcmp(a,b);
    if(!v)
    printf("Strings are same");
    else
    printf("Strings are not same");

    return 0;
}