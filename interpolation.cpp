#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int interpolation(int a[], int l, int h, int x)
{int pos;
 while(a[h]!=a[l] || ((x>a[l]) && (x<=a[h])))
 {pos=l+(((x-a[l])/(a[h]-a[l]))*(h-l));
  if(x<a[pos])
  {h=pos-1;
  }
  else if(x>a[pos])
  {l=pos+1;
  }
  else
  return pos;
 }
}
main()
{int n,i,x,t;
 printf("\nEnter the total number of array elements");
 scanf("%d",&n);
 int a[n];
 int l=0,h=n;
 printf("\nEnter the elements");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]); }
 printf("\nEnter the element to be found");
 scanf("%d",&x);
 t=interpolation(a,l,h,x);
 if(t<0)
  printf("\nElement is not there in list");
 else
  printf("\nElement %d is found at location %d",a[t],(t+1)); 
}
