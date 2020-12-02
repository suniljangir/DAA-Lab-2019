#include<stdio.h>
int matrix_chain_mult(int a[],int n);
main()
{
    int n,a[20],i,x;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=matrix_chain_mult(a,n);
    printf("%d",x);
}

int matrix_chain_mult(int a[],int n)
{
    int i,m[20][20],q,j,l,k;
    for(i=1;i<n;i++)
    {
        m[i][i]=0;
    }
    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=99999;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                }
            }
        }
    }
    return m[1][n-1];
}
