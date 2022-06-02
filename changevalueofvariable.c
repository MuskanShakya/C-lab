#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    printf("%d",x);
    p=&x;
    *p=10;
    printf("\n%d",x);
    *p=20;
    printf("\n%d",x);
}