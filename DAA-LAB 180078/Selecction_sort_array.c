#include<stdio.h>
#include<conio.h>
void main(){
	int min,t,k,a[25],n,i,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Array with steps\n");
	for(i=0;i<n;i++){
		min=i;
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
	}
	printf("\nSorted array\n");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
}
