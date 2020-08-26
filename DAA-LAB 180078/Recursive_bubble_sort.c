#include<stdio.h>
#include<conio.h>
bubblesort(int a[],int n){
	int i,t;
	if(n==1){
		return;
	}
	else{
		for(i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	bubblesort(a,n-1);
}
void main(){
	int i,a[25],n;
	printf("Enter the number off elements in an array (max 25): ");
	scanf("%d",&n);
	printf("Enter the elements of tha array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("Sorted array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
