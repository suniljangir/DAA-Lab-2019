#include<conio.h>
#include<stdio.h>
void insert_sort_recur(int a[],int n);
void main()
{ clrscr();
  int i,n,l,a[100];
  printf("\n enter the no. of elements");
  scanf("%d",&n);
  printf("\n enter the elements of array");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
  insert_sort_recur(a,n);
   for(l=0;l<n;l++)
 {printf("%d\t",a[l]);
 }
  getch();
}
void insert_sort_recur(int a[],int n)
{ int k,j;
 if(n<=1)
   return;
   insert_sort_recur(a,n-1);
   k=a[n-1];
   j=n-2;
  while(j>=0 && a[j]>k)
  { a[j+1]=a[j];
    j=j-1;
  }
  a[j+1]=k;
 getch();
}