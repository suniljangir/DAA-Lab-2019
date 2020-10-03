#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a[20];
partition(int p,int r)
{
 int x,i,j,k,temp;
 x=a[r];
 i=p-1;
 for(j=p;j<=r-1;j++)
 {
  if(a[j]<=x)
  {
   i=i+1;
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 temp=a[i+1];
 a[i+1]=a[r];
 a[r]=temp;

 printf("\n");
 for(k=0;k<=r;k++)
 {
  printf("%d\t",a[k]);
 }
 getch();
 return(i+1);
}
quicksort(int p,int r)
{
 int q;
 if(p<r)
 {
  q=partition(p,r);
  quicksort(p,q-1);
  quicksort(q+1,r);
 }
}
main()
{
 int i,p,r,n;
 clrscr();
 printf("\n Enter the size of array:");
 scanf("%d",&n);
 p=0;
 r=n-1;
 printf("\n Enter 7 nos. for array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 quicksort(p,r);
}