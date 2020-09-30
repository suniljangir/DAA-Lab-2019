#include<stdio.h>
#include<conio.h>
void main()
{ int a[30],i,n,j,k,min,minloc,temp,p;
  clrscr();
  printf("\n enter the total elements:");
  scanf("%d",&n);
  printf("enter the numbers:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  { min=a[i];
    minloc=i;
    for(j=i+1;j<n;j++)
    {if(min>a[j])
    { min=a[j];
      minloc=j;
    }
    }
    k=minloc;
    if(i!=k)
    {temp=a[i];
     a[i]=a[k];
     a[k]=temp;
  }
}
printf("\n");
for(i=0;i<n;i++)
{ printf("%d\t",a[i]);
}
getch();
}