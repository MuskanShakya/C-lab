#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,l,f,c,newnum;
    printf("Enter the number-");
    scanf("%d",&n);
    m=n;
    c=log10(m);
    l=n%10;
    while(n>=10)
    {
    
        n=n/10;
    }
    f=n;
    printf("Last digit %d\n",l);
    printf("First digit %d",f);

    newnum=(l * pow(10, c) + f) + (m - (f * pow(10, c) + l));
    printf("\nThe swapped number is %d",newnum);

    return 0;

}