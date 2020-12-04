#include<stdio.h>

main()
{
int n,i,a[100],lb,ub;
printf("\n enter the size=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
lb=0;
ub=n-1;
mergesort(a,lb,ub);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
void mergesort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge(a,lb,mid,ub);
}}
void merge(int a[],int lb,int mid,int ub)
{
int m,n,i,j,k;
m=mid-lb+1;
n=ub-mid;
int l1[10],l2[10];
for(i=0;i<m;i++)
{
l1[i]=a[lb+i];
}
for(j=0;j<n;j++)
{
l2[j]=a[mid+j+1];
}
i=0;
j=0;
k=lb;
while(i<m && j<n)
{
if(l1[i]<l2[j])
{
a[k]=l1[i];
k++;
i++;
}
else
{
a[k]=l2[j];
k++;
j++;
}}
while(i<m)
{
a[k]=l1[i];
k++;
i++;
}
while(j<n)
{
a[k]=l2[j];
k++;
j++;
}
}
