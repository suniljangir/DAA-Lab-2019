#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[10];
merge(int p,int q,int r)
{
 int n1,n2,k,i,j;
 n1=q-p+1;
 n2=r-q;
 int L[10];
 int R[10];
 for(i=1;i<=n1+1;i++)
 {
  L[i]=a[p+i-1];
  L[n1+1]=20;
 }
 for(j=1;j<=n2+1;j++)
 {
  R[j]=a[q+j];
  R[n2+1]=20;
 }
 i=1;
 j=1;
 for(k=p;k<=r;k++)
 {
  if(L[i]<=R[j])
  {
   a[k]=L[i];
   i=i+1;
  }
  else
  {
   a[k]=R[j];
   j=j+1;
  }
 }
  printf("\n");
  for(k=1;k<=r;k++)
  {
   printf("%d\t",a[k]);
  }
 getch();
 }
merge_sort(int p,int r)
{
 int q;
 if(p<r)
 {
  q=(p+r)/2;
  merge_sort(p,q);
  merge_sort(q+1,r);
  merge(p,q,r);
 }
}
main()
{
 int i,p,r,t;
 clrscr();
 printf("\n Enter the array size:");
 scanf("%d",&t);
 p=1;
 r=t;
 printf("\n Enter the integer values for array:");
 for(i=1;i<=t;i++)
 {
   scanf("%d",&a[i]);
 }
 merge_sort(p,r);
 getch();
}
