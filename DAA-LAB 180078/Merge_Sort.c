#include<stdio.h>
#include<conio.h>
void merge(int a[],int p,int q,int r){
	int k,n,m,i,j;
	n=q-p+1;
	m=r-q;
	int l[n+1],R[m+1];
	l[n]=1000;
	R[m]=2000;
	for(i=0;i<n;i++){
		l[i]=a[p+i];
	}
	for(j=0;j<m;j++){
		R[j]=a[q+j+1];
	}
	i=0;
	j=0;
	for(k=p;k<=r;k++){
		if(l[i]<=R[j]){
			a[k]=l[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++;
		}
	}
	while(i<n){
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<m){
		a[k]=R[m];
		m++;
		k++;
	}
}
void merge_sort(int a[],int p,int r){
	int q;
	if(p<r){
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
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
	merge_sort(a,0,n-1);
	printf("\nArray after sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
