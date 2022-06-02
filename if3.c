#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    n%5==0 && n%11==0?printf("%d is divisible by 5 and 11 both",n):printf("not divisible");
    return 0;
}