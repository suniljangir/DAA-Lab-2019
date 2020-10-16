#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
int i,a[15],n,key,l,u,pos;
l=0;
printf("\n enter the number of elements:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
u=n-1;
printf("\n enter the element to search:");
scanf("%d",&key);

pos=l+((key-a[l])*(u-l)/(a[u]-a[l]));

printf("\n the position of element %d is=%d",key,pos);
getch();
}