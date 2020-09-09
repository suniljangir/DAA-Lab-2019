#include<stdio.h>
#include<conio.h>
void main(){
	int a[25],n,i,j,k,t;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Array sorting with steps:\n");
	for(i=1;i<n;i++){
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		printf("\n");
		for(k=0;k<n;k++){
			printf("%d\t",a[k]);
		}
	}
	printf("\nArray after sorting\n");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
}
