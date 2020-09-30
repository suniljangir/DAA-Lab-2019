
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
  int a[20];
  int i,j,k,n;
  int u;
  int key;
  j=1;
  clrscr();
  printf("\n Enter the array size:");
  scanf("%d",&n);
  u=n-1;
  printf("\n Enter the elements of array:");
  for(k=0;k<=u;k++)
  {
   scanf("%d",&a[k]);
  }
  while(j<=u)
  {
   key=a[j];
   i=j-1;
   while((i>-1)&&(a[i]>key))
   {
    a[i+1]=a[i];
    i=i-1;
   }
   a[i+1]=key;
   j=j+1;
   printf("\n");
   for(k=0;k<=u;k++)
   {
    printf("\t%d",a[k]);
   }
  }
  getch();
}
