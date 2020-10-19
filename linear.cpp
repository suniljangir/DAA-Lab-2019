#include<stdio.h>
#include<conio.h>
int main()
{int n,n1,i,a[25],c=0;
 printf("enter the no of array elements");
 scanf("%d",&n);
 printf("enter the array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the element to be searched");
 scanf("%d",&n1);
 for(i=0;i<n;i++)
 {if(a[i]==n1)
  {
   printf("element found at position %d",(i+1));
   break;
  }
 }
 if(i==n)
 printf("element not found");
 return 0;
}
