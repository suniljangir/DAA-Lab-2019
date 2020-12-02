#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main(){
	int s,remw,i,n,W,max,j,t;
	s=0;
	printf("Enter the weight of knapsack: ");
	scanf("%d",&W);
	remw=W;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	int wt[n],p[n],p_u[n];
	for(i=0;i<n;i++){
		printf("Enter the weight of process %d: ",i);
		scanf("%d",&wt[i]);
		printf("Enter the profit of process %d: ",i);
		scanf("%d",&p[i]);
		printf("\n");
		p_u[i]=p[i]/wt[i];
	}
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++){
			if(p_u[max]<p_u[j]){
				max=j;
			}
		}
		if(max!=i){
			t=p_u[max];
			p_u[max]=p_u[i];
			p_u[i]=t;
			
			t=p[max];
			p[max]=p[i];
			p[i]=t;
			
			t=wt[max];
			wt[max]=wt[i];
			wt[i]=t;
		}
	}
	for(i=0;i<n;i++){
		if(wt[i]<=remw){
			s=s+p[i];
			remw=remw-wt[i];
		}
	}
	printf("Weight of knapsack: %d",W);
	printf("\nThe max profit is: %d",s);
	
}
