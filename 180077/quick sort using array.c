
#include<stdio.h>

void quicksort(int a[],int l,int h);
int qpart(int a[],int l,int h);
void main()
{
int n,i,l,h,a[20];

printf("\n enter size=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=0;
h=n-1;
quicksort(a,l,h);
printf("\n sorted array=\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
void quicksort(int a[],int l,int h)
{
int k;
if(l<h)
{
k=qpart(a,l,h);
quicksort(a,l,k);
quicksort(a,k+1,h);
}}
int qpart(int a[],int l,int h)
{
int pivot,i,j,temp;
i=l;
j=h;
pivot=a[l];
while(i<j)
{
while(a[i]<=pivot)
{
i++;
}
while(a[j]>pivot)
{
j--;
}
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[l];
a[l]=a[j];
a[j]=temp;
return(j);
}
