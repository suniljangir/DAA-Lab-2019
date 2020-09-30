#include<stdio.h>
#include<conio.h>
int a[7];
void merge(int p,int q,int r)
{
int n1,n2,i,j,k;
int L[10],R[10];
n1=q-p+1;
n2=r-q;
L[n1+1];
R[n2+1];
L[n1+1]=32767;
R[n2+1]=32767;
for(i=1;i<=n1;i++)
 {
  L[i]=a[p+i-1];
 }
for(j=1;j<=n2;j++)
 {
  R[j]=a[q+j];
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
}
void merge_sort(int p,int r)
{int q,n;
  if(p<r)
  {
   q=(p+r)/2;
   merge_sort(p,q);
   merge_sort(q+1,r);
   merge(p,q,r);
  }
  printf("\n");
  for(n=1;n<=r;n++)
  {
  printf("%d\t",a[n]);
  }
  getch();
}
void main()
{
clrscr();
int n,p=1,r;
printf("\n Enter number of elelemts:");
scanf("%d",&r);
printf("\n Enter elements of array:");
 for(n=1;n<=r;n++)
  {
   scanf("%d",&a[n]);
  }
merge_sort(p,r);
getch();
}

 