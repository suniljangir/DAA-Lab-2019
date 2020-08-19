#include<stdio.h>
#include<conio.h>
main(){
	int a[25],n,i,key,l=0,mid,u,c=0;
	printf("Enter the size of array fron 1 to 25: ");
	scanf("%d",&n);
	printf("Enter the elements of the array in ascending order:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	u=n-1;
	printf("Enter the value to be searched: ");
	scanf("%d",&key);
	do{
		mid=(u+l)/2;
		if(key==a[mid]){
			printf("The value %d found at position %d",key,mid+1);
			c=1;
		}else if(key<a[mid]){
			u=mid-1;
		}
		else{
			l=mid+1;
		}
	}while(l<=u&&c==0);
	if(c==0){
		printf("Value not found");
	}
}
