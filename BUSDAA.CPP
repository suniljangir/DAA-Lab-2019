#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
 int a[10];
 int i,k,n,j,t;
 clrscr();
 printf("\n Enter the array size:");
 scanf("%d",&n);
 printf("\n Enter the array elements:");
 for(k=0;k<n;k++)
 scanf("%d",&a[k]);
 for(i=0;i<(n-1);i++)
 {
  for(j=0;j<(n-i);j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
 }
   printf("\n");
  for(k=0;k<n;k++)
  {
   printf("%d\t",a[k]);
  }
 getch();
}
}
