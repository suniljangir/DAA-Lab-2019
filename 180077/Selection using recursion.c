#include<stdio.h>
main()
{
    int n,i,a[30];
    printf("\n enter the no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,n,0);
    printf("\n sorted array=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }}
void selectionsort(int a[],int n,int x)
{
    int j,temp;
    int k=x;
    for(j=x+1;j<n;j++)
    {
        if(a[k]>a[j])
        {
            temp=a[k];
            a[k]=a[j];
            a[j]=temp;
            k=j;
        }}
    if(x+1<n)
    {
        selectionsort(a,n,x+1);
    }}

