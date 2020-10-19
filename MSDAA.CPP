#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[10];
int min(int x,int y)
{
 return (x<y)?x:y;
}
merge(int l,int q,int r)
{
 int n1,n2,i,j,k;
 n1=q-l+1;
 n2=r-q;
 int L[10];
 int R[10];
 for(i=0;i<n1;i++)
 {
  L[i]=a[l+i];
 }
 for(j=0;j<n2;j++)
 {
  R[j]=a[q+1+j];
  R[n2+1]=20;
 }
 i=0;
 j=0;
 k=l;
 while(i<n1 && j<n2)
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
  k++;
 }
 while(i<n1)
 {
  a[k]=L[i];
  i++;
  k++;
 }
 while(j<n2)
 {
  a[k]=R[j];
  j++;
  k++;
 }
}
merge_sort(int n)
{
 int q,s,li,ri;
 for(s=1;s<n-1;s=2*s)
 {
  for(li=0;li<n-1;li+=2*s)
  {
   q=min(li+s-1,n-1);
   ri=min(li+2*s-1,n-1);
   merge(li,q,ri);
  }
 }
}
main()
{
 int i,p,r,t,n;
 clrscr();
 printf("\n Enter the array size:");
 scanf("%d",&t);
 printf("\n Enter the integer values for array:");
 for(i=1;i<=t;i++)
 {
   scanf("%d",&a[i]);
 }
 n=sizeof(a)/sizeof(a[0]);
 merge_sort(n);
 printf("\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}
