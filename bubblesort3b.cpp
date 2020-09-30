#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubble(int a[],int n)
{ int temp,i;
  if(n==1)
  return;
  for(i=0;i<n-1;i++)
  {if(a[i]>a[i+1])
   {temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
   }
  }
  bubble(a,(n-1));
}
void display(int a[],int n)
{int i;
 printf("\nelements after sorting is done are\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
main()
{int n,i;
 printf("\nenter the no. of elements to be sorted");
 scanf("%d",&n);
 int a[n];
 printf("\nenter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\nelements before sorting are:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 bubble(a,n);
 display(a,n);
}
