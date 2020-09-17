#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void merge(int a[], int p, int q, int r)
{int i,j,k;
 int n1=q-p+1;
 int n2=r-q;
 int L[n1+1];
 int R[n2+1];
 L[n1+1]=32767;
 R[n2+1]=32767;
 for(i=1;i<=n1;i++)
  L[i]=a[p+i-1];
 for(j=1;j<=n2;j++)
  R[j]=a[q+j];
 i=1,j=1;
 for(k=p;k<=r;k++)
 {if(L[i]<=R[j])
  {a[k]=L[i];
   i=i+1;
  }
  else
  {a[k]=R[j];
   j=j+1;
  }
 }  
}
void mergesort(int a[], int p, int r)
{int q,i; 
 if(p<r)
   {q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
	merge(a,p,q,r); 
   } 
}
main()
{int n,i;
 printf("\nEnter the Number of elements you want to sort");
 scanf("%d",&n);
 printf("\nEnter the Elements");
 int a[n];
 int p=1,r=n;
 for(i=1;i<=n;i++)
 {scanf("%d",&a[i]);
 }
 printf("\nElements before sorting are:\n");
 for(i=1;i<=n;i++)
 {printf("%d\t",a[i]);
 }
 mergesort(a,p,r);
 printf("\nEleemnts after sorting are:\n");
 for(i=1;i<=n;i++)
 printf("%d\t",a[i]);
}
