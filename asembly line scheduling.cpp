#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define NUM_LINE 2 
#define NUM_STATION 4
 
int min(int a, int b)
{ 
	return a < b ? a : b; 
} 

int carAssembly(int a[][NUM_STATION], 
				int t[][NUM_STATION], 
				int *e, int *x) 
{ 
	int T1[NUM_STATION], T2[NUM_STATION], i; 

	T1[0] = e[0] + a[0][0]; 

	T2[0] = e[1] + a[1][0]; 

	for (i = 1; i < NUM_STATION; ++i) 
	{ 
		T1[i] = min(T1[i - 1] + a[0][i], 
					T2[i - 1] + t[1][i] + a[0][i]); 
		T2[i] = min(T2[i - 1] + a[1][i],
					T1[i - 1] + t[0][i] + a[1][i]); 
	} 

	return min(T1[NUM_STATION - 1] + x[0], 
			T2[NUM_STATION - 1] + x[1]); 
} 

int main() 
{ 
	int i,j;
	int a[20][20],t[20][20];
	cout<<"Enter the time taken at a station:(first for line 1 then line 2)"<<endl;
	for(i=0;i<NUM_STATION;i++)
	{
		for(j=0;j<NUM_STATION;j++)
		{
			cin>>a[i][j];
		}
   }
	cout<<"Enter the time taken on the line between two stations:"<<endl;
	for(i=0;i<NUM_STATION;i++)
	{
		for(j=0;j<NUM_STATION;j++)
		{
			cin>>t[i][j];
		}					
	}								
	int e[] = {10, 12}, x[] = {18, 7}; 

	cout << carAssembly(a, t, e, x); 
	return 0; 
} 


