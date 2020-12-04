#include<stdio.h>

main()
{
    int n,a[20],i;
    printf("\n no. of elements=");
    scanf("%d",&n);
    printf("\n enter elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insort(a,n);
    printf("\n sorted array=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void insort(int a[],int n)
{
    int x,y;
    if(n<=1)
    {
        return;
    }
    insort(a,n-1);

    x=a[n-1];
    y=n-2;

    while(y>=0 && a[y]>x)
    {
        a[y+1]=a[y];
        y--;
    }
    a[y+1]=x;
}
