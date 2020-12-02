#include<conio.h>
#include<stdio.h>
void insert_sort(int a[],int n);
void main()
{ clrscr();
  int i,n,a[100];
  printf("\n enter the no. of elements");
  scanf("%d",&n);
  printf("\n enter the elements of array");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
  insert_sort(a,n);
  getch();
}
void insert_sort(int a[],int n)
{ int i,j,key,l;
  j=1;
  while(j<n)
  { i=j-1;
    key=a[j];
    while(i>(-1) && a[i]>key)
    { a[i+1]=a[i];
      i=i-1;
    }
    a[i+1]=key;
    j=j+1;
 }
 for(l=0;l<n;l++)
 {printf("%d\t",a[l]);
 }
 getch();

}
