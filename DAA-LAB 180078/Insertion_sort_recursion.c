#include<conio.h>
#include<stdio.h>
void insertion_sort(int a[],int i,int n){
	int j,k,t;
	if(i==n){
		return;
	}
	t=a[i];
	j=i-1;
	while(j>=0&&a[j]>t){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=t;
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
	printf("\n");
	insertion_sort(a,i+1,n);
}
void main(){
	int a[25],n,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Sorting using steps:\n");
	insertion_sort(a,1,n);
	printf("Array after sorting:\n");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
}
