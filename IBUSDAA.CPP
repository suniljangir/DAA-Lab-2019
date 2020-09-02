#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void BubbleSort( int a[],int n);
main()
{
 int a[10];
 int i,j,t,k,n;
 clrscr();
 printf("\n Enter the array size:");
 scanf("%d",&n);
 printf("\n Enter the array elements:");
 for(k=0;k<n;k++)
 scanf("%d",&a[k]);
 BubbleSort(a,n);
   printf("\n");
    for(k=0;k<n;k++)
    {
      printf("%d\t",a[k]);
    }
 getch();
}
void BubbleSort( int a[],int n)
{
 int i,j,t,k;
 i=n;
 if(i>0)
 {
  for(j=0;j<(n-1);j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
  BubbleSort(a,n-1);
 }
 else
 return;
}
