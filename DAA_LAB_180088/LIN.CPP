
#include<conio.h>
#include<stdio.h>
int main()
{ int i,found=0,pos=0,key,n,A[100];
clrscr();
printf("enter the no.-");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
{ scanf("%d",&A[i]);
}
printf("enter the noo to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{ if(key==A[i])
{ pos=i;
printf("success at pos %d",pos);
found=1;
}
}
if(found==0)
{printf("unsuccess");
}
getch();
}