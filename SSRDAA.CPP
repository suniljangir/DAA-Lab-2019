#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[50];
int select_min(int l,int r)
{
 int min,minloc,i;
 min=a[l];
 minloc=l;
 for(i=l+1;i<=r;i++)
 {
  if(min>a[i])
  {
   min=a[i];
   minloc=i;
  }
 }
 return(minloc);
}
main()
{
int i,j,k,temp,n;
int l=0,u;
clrscr();
printf("\n Enter the size of the array:");
scanf("%d",&n);
u=n;
printf("\n enter the elements of array:");
for(k=0;k<n;k++)
{
 scanf("%d",&a[k]);
}
for(i=0;i<=u-1;i++)
{
 j=select_min(i,u);
 if(i!=j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }
printf("\n");
for(k=1;k<=n;k++)
printf("%d\t",a[k]);
}
getch();
}