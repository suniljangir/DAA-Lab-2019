#include<stdio.h>
#include<conio.h>

partition(int a[], int p, int r)
{int x,i,j,temp,temp2;
 x=a[r];
 i=p-1;
 for(j=p;j<=r-1;j++)
 {if(a[j]<=x)
  {i=i+1;
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 temp2=a[i+1];
 a[i+1]=a[r];
 a[r]=temp2;
 return i+1;
}
quicksort(int a[], int p, int r)
{int q;
 if(p<r)
 {q=partition(a,p,r);
  quicksort(a,p,q-1);
  quicksort(a,q+1,r);
 }
}
main()
{int n,i;
 printf("\nEnter the Number of elemenets to insert");
 scanf("%d",&n);
 int a[n];
 printf("\nEnter the elements");
 for(i=1;i<=n;i++)
 {scanf("%d",&a[i]);
 }
 int p=1;
 int r=n;
 printf("\nElement before sorting are:\n");
 for(i=1;i<=n;i++)
 {printf("%d ",a[i]);
 }
 quicksort(a,p,r);
 printf("\nElements after sorting are:\n");
 for(i=1;i<=n;i++)
 {printf("%d ",a[i]);
 }
 getch();
}
