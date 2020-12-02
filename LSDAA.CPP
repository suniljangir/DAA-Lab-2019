#include<stdio.h>
#include<conio.h>
void main()
{
int i, A[10],found=0,L=0,U,n,key;
i=L;
clrscr();
printf("\n Enter size of array:");
scanf("%d",&n);
 U=n;
printf("\n Enter elements in array:");
for(i=0;i<n;i++)
 {
scanf("%d",&A[i]);
 }
printf("\n Enter the element to search:");
scanf("%d",&key);
for(i=L;i<U;i++)
 {
if(A[i]==key)
   {
printf("\n Successful at location %d",i);
found=1;
    }
  }
if(found==0)
  {
printf("\n Unsuccessful");
  }
getch();
}
