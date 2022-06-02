#include<stdio.h>
int main()
{
	int n;
	printf("Enter thr size of array");
	scanf("%d",&n);
	int a[n],i,max,min;
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	min=max=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
		min=a[i];   
		if(max<a[i])
		max=a[i];       
    }
    printf("The maximun element in the array is %d",max);
    printf("\nThe minimun element in the array is %d",min);
    return 0;
}
