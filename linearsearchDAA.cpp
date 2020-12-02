#include<stdio.h>
#include<conio.h>

int main()
{ int a[20],n,i,n1,pos=-1;
  printf("Enter the Number elements");
  scanf("%d",n);
  printf("enter the elements");
  for(i=0;i<=n;i++)
   {scanf("%d",a[i]);}
  printf("Enter the element to be searched");
  scanf("%d",n1);
  for(i=0;i<=n;i++)
   {if(a[i]==n1)
    pos=i;
    break;
   }
  if(pos==-1)
  printf("Element nor found");
  else
  printf("element %d is found at %d",n1,(pos+1));
  return 0;
}
