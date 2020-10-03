#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void merge_sort(int a[],int p,int r);
void merge(int a[],int p,int q,int r);
void main()
{int a[50],i,n,p,r;
clrscr();
printf("\n enter the no of elements");
scanf("%d",&n);
printf("\n enter the elements of array");
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);
}
p=1;
r=n;
merge_sort(a,p,r);
printf("\n");
for(i=1;i<=n;i++)
{printf("%d\t",a[i]);
}
getch();
}
void merge_sort(int a[],int p,int r)
{int q,i;
if(p<r)
{q=(p+r)/2;
merge_sort(a,p,q);
merge_sort(a,q+1,r);
merge(a,p,q,r);
}
}
void merge(int a[],int p,int q,int r)
{int i,j,k;
int n1=q-p+1;
int n2=r-q;
int l[50];
int R[50];
l[n1+1]=32767;
R[n2+1]=32767;
for(i=1;i<=n1;i++)
{l[i]=a[p+i-1];
}
for(j=1;j<=n2;j++)
{R[j]=a[q+j];
}
i=1;
j=1;
for(k=p;k<=r;k++)
{if(l[i]<=R[j])
{a[k]=l[i];
i++;
}
else
{a[k]=R[j];
j++;
}
}
/*
while(i<n1)
{a[k]=l[i];
i++;
k++;
}
while(j<n2)
{a[k]=R[j];
j++;
k++;
}*/
}
