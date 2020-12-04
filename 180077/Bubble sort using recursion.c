#include<stdio.h>
main()
{
    int n,a[20],i;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    printf("\n sorted array=\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }}
void bsort(int a[],int n)
{
    int i,temp;
    if(n==1){
        return;
    }
    for(i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }}
    bsort(a,n-1);}

