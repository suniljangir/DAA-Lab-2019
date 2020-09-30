#include<stdio.h>
#include<conio.h>
void BubbleSortRecursion(int a[],int num);
int main()
{
int i, j, num, temp;
printf("\n Enter the number of elements:");
scanf("%d",&num);
int a[100];
printf("\n Enter the numbers:");
for(i=0; i<num; i++)
{
scanf("%d",&a[i]);
}
BubbleSortRecursion(a,num);
printf("\n Given numbers in ascending order:");
for(i=0; i<num; i++)
{
printf("%d\n",a[i]);
}
getch();
}
void BubbleSortRecursion(int a[],int num)
{
int i, j, temp;
i=num;
if(i>0)
{
for(j=0;j<num-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
BubbleSortRecursion(a,num-1);
}
else
{
return;
}
}