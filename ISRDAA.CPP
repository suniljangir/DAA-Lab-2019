#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void selectionsort(int a[],int u);
main()
{
  int a[20];
  int k,n;
  int u;
  clrscr();
  printf("\n Enter the array size:");
  scanf("%d",&n);
  u=n-1;
  printf("\n Enter the elements of array:");
  for(k=0;k<=u;k++)
  {
   scanf("%d",&a[k]);
  }
  selectionsort(a,u);
  printf("\n");
  for(k=0;k<=u;k++)
  {
    printf("\t%d",a[k]);
  }
  getch();
 }
void selectionsort(int a[],int u)
{
  int i,j=1,key;
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
  }
}
