#include<stdio.h>
#include<conio.h>
void display(int a[],int n){
	int k;
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
}
void sorting(int a[],int i,int n){
	int j,min,k,t;
	min=i;
	if(i==n){
		return;
	}
	for(j=i+1;j<n;j++){
		if(a[min]>a[j]){
				min=j;
		}
	}
		if(min!=i){
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
		printf("\n");
		for(k=0;k<n;k++){
			printf("%d\t",a[k]);
		}
		printf("\n");
		sorting(a,i+1,n);
	}
	
void main(){
	int a[25],n,k,i=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Array sorting with steps:\n");
	sorting(a,i,n);
	printf("Array after sorting:\n");
	display(a,n);
}
