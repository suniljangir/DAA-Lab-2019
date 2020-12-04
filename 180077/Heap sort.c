#include<stdio.h>

main()
{
    int n,a[20],i;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    printf("\n enter the values=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("\n sorted array=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void heapsort(int a[],int n)
{
    int i,temp;
    build_max_heap(a,n);
    for(i=n-1;i>0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        max_heapify(a,i,0);
    }
}

void build_max_heap(int a[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    {
        max_heapify(a,n,i);
    }
}

void max_heapify(int a[],int n,int i)
{
    int largest,temp;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[i])
    {
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<n && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        max_heapify(a,n,largest);
    }

}
