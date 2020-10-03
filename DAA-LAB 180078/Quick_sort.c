#include<stdio.h>
#include<conio.h>
int partition(int a[],int p,int r){
	int l,i,j,t;
	i=p-1;
	for(j=p;j<r;j++){
		if(a[j]<=a[r]){
			i++;
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
		l=a[i+1];
		a[i+1]=a[r];
		a[r]=l;
	return (i+1);
}
void quick_sort(int a[],int p,int r){
	int q;
	if(p<r){
		q=partition(a,p,r);
		printf("\n\n%d\n\n",q);
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);
	}
}
void main(){
	int a[15],n,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	printf("\nArray after sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
