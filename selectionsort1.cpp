#include<stdio.h>
#include<conio.h>

int a[20];

main()
{int i,j,n,k,temp,minloc=0;
 printf("\nenter the No. of elements you want to sort");
 scanf("%d",&n);
 printf("\nenter the elements");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
  } 
 printf("\nElements before sorting are:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]); 
 for(i=0;i<n-1;i++)
 {minloc=i;
  for(j=i+1;j<n;j++)
  {if (a[j]<a[minloc])
   {minloc=j;
   }
  }
  if(minloc!=i)
  {temp=a[i];
   a[i]=a[minloc];
   a[minloc]=temp;
  }
 }
 printf("\nelements after sorting via selection sort is:\n");
 for(k=0;k<n;k++)
 printf("%d\t",a[k]);
}
