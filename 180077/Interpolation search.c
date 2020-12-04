#include<stdio.h>

main()
{
    int n,a[20],val,l,h,i,mid,loc=0;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    printf("\n enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the value to be searched=");
    scanf("%d",&val);
    l=0;
    h=n-1;
    while(l<h)
    {
        mid=l+((h-l)/(a[h]-a[l]))*(val-a[l]);
        if(a[mid]==val)
        {
            loc=1;
            printf("\n %d is present at position %d(index=%d)",val,mid+1,mid);
            break;
        }
        if(a[mid]>val)
        {
            h=mid-1;
        }
        if(a[mid]<val)
        {
            l=mid+1;
        }
    }
    if(loc==0)
    {
        printf("\n %d not found in the array",val);
    }
}
