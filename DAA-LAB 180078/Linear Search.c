#include<stdio.h>
#include<conio.h>
main(){
	int a[25],n,i,key,c=0;
	printf("Enter the size of array fron 1 to 25: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			c=1;
			break;
		}
	}
	if(c==1){
		printf("The value %d is found at position: %d",key,i+1);
	}
	if(c==0){
		printf("Value not found");
	}
}
