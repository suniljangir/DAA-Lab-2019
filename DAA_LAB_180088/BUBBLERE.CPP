#include<stdio.h>
#include<conio.h>
void bubble_sort(int A[],int n);
void main()
{ clrscr();
  int i,A[100],n;
  printf("\n enter the no. of elements");
  scanf("%d",&n);
  printf("\n enter the values for array");
  for(i=0;i<n;i++)
  { scanf("%d",&A[i]);
  }
  bubble_sort(A,n);
   for(i=0;i<n;i++)
  {printf("%d\t",A[i]);
  }
  getch();
}
void bubble_sort(int A[],int n)
{ int j,k,temp;
j=n;
if(j>0)
{ for(k=0;k<n-1;k++)
  { if(A[k]>A[k+1])
      { temp=A[k];
	A[k]=A[k+1];
	A[k+1]=temp;
      }
  }
bubble_sort(A,n-1);
}
else
{ return;
}
}
