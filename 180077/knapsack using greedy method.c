#include<stdio.h> 
#include<conio.h>
int max(int a, int b){
	return (a > b) ? a : b;
} 
int knapSack(int W, int wt[], int value[], int n){
	if (n == 0 || W == 0) 
		return 0; 
	if (wt[n - 1] > W) 
		return knapSack(W, wt, value, n - 1); 
	else
		return max( 
			value[n - 1] + knapSack(W - wt[n - 1], wt, value, n - 1), 
			knapSack(W, wt, value, n - 1)); 
}
main(){ 
	int value[10],wt[10],i,W,n;
	printf("Enter the number of elements (max 10): ");
	scanf("%d",&n);
	printf("Enter the valueue\n");
	for(i=0;i<n;i++){
		scanf("%d",&value[i]);
	}
	printf("Enter the weight\n");
	for(i=0;i<n;i++){
		scanf("%d",&wt[i]);
	}
	printf("Enter the weight of bag: ");
	scanf("%d",&W);
	printf("%d", knapSack(W, wt, value, n)); 
}
