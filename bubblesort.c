#include<stdio.h>


void bubblesort(int *a,int n)
{
    int temp;
    int isSorted=0;
    for ( int i = 0; i < n-1; i++) //for number of passes
    {
        isSorted=1;
        for ( int j = 0; j <n-1-i; j++) //for comparsion in each pass
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted)
        return;
        }
}
int main()
{
    int n;
    printf("Enter the size of array-");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array-");
    for ( int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    
    }
    bubblesort(a,n);
    printf("Array after sorting-");
    for ( int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}