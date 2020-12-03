#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() {
   int val[10], wt[10];
   int W,n,i;
   cout<<"Enter the value of number of items:"<<endl;
   cin>>n;
   cout<<"Enter the weight of the knapsack:"<<endl;
   cin>>W;
   cout<<"Enter the values of the items:"<<endl;
   for(i=0;i<n;i++)
   cin>>val[i];
   cout<<"Enter the weight of the items:"<<endl;
   for(i=0;i<n;i++)
   cin>>wt[i];
   cout<<"The solution is:"<<knapsack(W, wt, val, n);
   return 0;
}
