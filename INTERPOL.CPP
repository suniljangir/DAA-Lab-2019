#include<iostream.h>
#include<conio.h>

void main()
{
 int A[40];
 int i,l,h,x,flag,n,pos;
 clrscr();
 cout<<"\n Enter the array size:";
 cin>>n;
 cout<<"\n Enter the array elements(in sorted and uniformly distributed manner):";
 for(i=0;i<n;i++)
 {
  cin>>A[i];
 }
 cout<<"\n Enter the element you want to search:";
 cin>>x;
 l=0;
 h=n-1;
 while(A[n]!=A[l] && x>=A[l] && x<=A[h])
 {
  pos= l+(((x-A[l])/(A[h]-A[l]))*(h-l));
  if(x<A[pos])
  {
   h=pos-1;
  }
  else if(x>A[pos])
  {
   l=pos+1;
  }
  else
  break;
 }
  cout<<"\n Element "<<A[pos]<<" found at the position:"<<pos;
 getch();
}