#include<stdio.h>
#include<conio.h>
void main()
{
int L=0,U,Flag=0,A[10],i,n,key,mid;
clrscr();
printf("\n Enter the size of array:");
scanf("%d",&n);
U=n;
printf("\n Enter elements of array:");
for(i=L;i<U;i++)
{
scanf("%d",&A[i]);
}
printf("\n Enter the element to search:");
scanf("%d",&key);
while((Flag==0 && L<U))
{mid=(L+U)/2;
if(key==A[mid])
 {printf("\n Success at location %d",mid);
  Flag=1;}
else{
if(key<A[mid]){
  U=mid-1;}
else{
  L=mid+1;}}
 }
if(Flag==0)
{
printf("\n Unsuccessful");
}
getch();}
