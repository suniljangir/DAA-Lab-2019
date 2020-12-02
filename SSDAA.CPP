#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int i,j,k,m,n,min,minloc,temp;
 int a[20];
 clrscr();
 printf("\n Enter the array size:");
 scanf("%d",&n);
 printf("\n Enter the array elements:");
 for(k=0;k<n;k++)
 {
  scanf("%d",&a[k]);
 }
 for(k=0;k<n;k++)
 {
  min=a[k];
  minloc=k;
  for(m=k+1;m<n;m++)
  {
   if(min>a[m])
   {
    min=a[m];
    minloc=m;
   }
  }
  j=minloc;
  if(k!=j)
  {
   temp=a[k];
   a[k]=a[j];
   a[j]=temp;
  }
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
  printf("\t%d",a[i]);
 }
 getch();
}