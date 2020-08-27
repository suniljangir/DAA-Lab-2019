#include<stdio.h>
main()
{
    int i,n,j,temp,a[20];
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    printf("\n enter elements=");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }}}
    printf("\n sorted array=");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }}
