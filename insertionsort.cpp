#include<stdio.h>
#include<conio.h>
int a[20];
void insertion(int a[],int n)
{  int j,i,key;
   j=1;
   while(j<n)
   {  key=a[j];
      i=j-1;
      while(i>=0 && a[i]>key)
      {a[i+1]=a[i];
       i=i-1;
	   } 
	  a[i+1]=key;
	  j=j+1; 
   }
} 
main()
{  int i,n;
   printf("\nEnter the No of elements to be sorted");
   scanf("%d",&n);
   printf("\nEnter the array elements");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("\nArray Elements before sorting are:\n");
   for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   insertion(a,n);
   printf("\nArray elements after sorting are:\n");
   for(i=0;i<n;i++)
     printf("%d\t",a[i]);
}
