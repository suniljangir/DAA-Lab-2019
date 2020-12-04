#include<stdio.h>

main()
{
    int a[20],n,i,j,k;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
    k=a[i];
    j=i-1;
    while(j>=0 && a[j]>k)
    {

        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=k;
    }
    printf("\n sorted array=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
