#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int s=0;
int max(int x, int y)
{
if(x>y)
return x;
else
return y;
}
void KS(int m, int n, int w[], int p[])
{
int v[100][200], a[10], i, j;
for(i=0; i<=m; i++)
v[0][i]=0;
for(i=1; i<=n; i++)
{
for(j=0; j<=m; j++)
{
if(j>=w[i])
v[i][j]=max(v[i-1][j], v[i-1][j-w[i]]+p[i]);
else
v[i][j]=v[i-1][j];
}
}
for(i=1; i<=n; i++)
a[i]=0;
i=n;
j=m;
while(i>0&&j>0)
{
if(v[i][j]!=v[i-1][j])
{
a[i]=1;
j=j-w[i];
}
i--;
}
printf("\n Optimal set of weight is:");
for(i=1; i<=n; i++)
{
if(a[i]==1)
{
printf("X%d=1\t", i);
s=s+p[i];
}
else
printf("X%d=0\t", i);
}
printf("\n Total Profit is:%d", s);
}
void main()
{
int w[10], p[10], i, m, n;
printf("\t 0/1 Knapsack Problem\n");
printf("\n Enter the number of items:");
scanf("%d", &n);
printf("\n Enter the weight of items:");
for(i=1; i<=n; i++)
scanf("%d", &w[i]);
printf("\n Enter the profits of the items:");
for(i=1; i<=n; i++)
scanf("%d", &p[i]);
printf("\n Enter the capacity of knapsack:");
scanf("%d", &m);
KS(m, n, w, p);
getch();
}
