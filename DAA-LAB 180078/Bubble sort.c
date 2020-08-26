#include<stdio.h>
#include<conio.h>
void swap(int *x,int *p){
	int t;
	t=*x;
	*x=*p;
	*p=t;
}
void main(){
	int a[25],k,n,i,j;
	printf("Enter number of elements (max 25): ");
	scanf("%d",&n);
	printf("Enter the elements of an array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n");
	printf("Array sorting with steps: \n");
	for(i=0;i<n-1;i++){
		for(k=0;k<n;k++){
			printf("%d\t",a[k]);
		}
		printf("\n");
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
