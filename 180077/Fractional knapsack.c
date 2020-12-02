#include<stdio.h>

main()
{
    int n,i,j;
    int v[20],w[20],r[20],sum=0,temp,T;
    float sol[20];
    printf("\n enter the capacity=");
    scanf("%d",&T);
    printf("\n enter no. of values=");
    scanf("%d",&n);
    printf("\n enter values=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("\n enter corresponding weights=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++)
    {
        r[i]=v[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(r[j]>r[i])
            {
                temp=r[j];
                r[j]=r[i];
                r[i]=temp;
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                temp=w[i];
                w[i]=w[j];
                w[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(T>w[i])
        {
            sol[i]=v[i];
            T=T-w[i];
        }
        else{
            sol[i]=(float)(v[i]/w[i]*T);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+sol[i];
    }
    printf("%d",sum);

}
