#include<stdio.h>
main()
{
    int n,a[20],temp,i,j;
    printf("\n enter no. of elements=");
    scanf("%d",&n);
    printf("\n enter values:");
    for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }}}
    printf("\n sorted array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }}

