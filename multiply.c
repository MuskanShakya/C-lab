//multiplication of matrices
#include<stdio.h>
int main()
{
       int i,j,k,m,n,a,b;
       printf("Enter the rows and column of first matrix");
       scanf("%d %d",&m,&n);
       printf("Enter the rows and column of second matrix");
       scanf("%d %d",&a,&b);
       int mat1[m][n],mat2[a][b],product[a][b],sum=0;
       printf("Enter the elements of first matrix-");
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               scanf("%d", &mat1[m][n]);
           }
       }
       printf("Enter the elements of second matrix-");
       for(i=0;i<a;i++)
       {
           for(j=0;j<b;j++)
           {
               scanf("%d", &mat2[a][b]);
           }
       }
       if(a!=n)
       {
           printf("Sorry!We can not multiply the matrices.");
       }
       else
       {
            for(i=0;i<m;i++)
            {
                for(j=0;j<b;j++)
                {
                    for(k=0;k<n;k++)
                    {
                            sum+=mat1[i][k]*mat2[k][j];
                    }
                    product[i][j]=sum;
                    sum=0;
                }
            }
       }
        printf("Resultant matrix-\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
    return 0;
}