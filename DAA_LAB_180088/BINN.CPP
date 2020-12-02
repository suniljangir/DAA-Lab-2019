
#include<conio.h>
#include<stdio.h>
void main()
{clrscr();
int l=0,n,u,mid=0,i,key;
int A[100];
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the no in array");
for(i=0;i<n;i++)
{scanf("%d",&A[i]);
}
printf("\n enter the value to search");
scanf("%d",&key);
u=n;
while(l<=u)
{mid=(l+u)/2;
if(key==A[mid])
{printf("\n success at pos=%d",mid);
break;
getch();
}
else if(A[mid]<key)
{l=mid+1;
}
else
{u=mid-1;
}
}
getch();
}