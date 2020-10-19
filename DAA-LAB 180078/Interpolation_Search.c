#include<stdio.h>
#include<conio.h>
void main(){
	int a[15],i,p,x,n,l,u,f;
	f=0;
	printf("Enter the number of elements(max 15): ");
	scanf("%d",&n);
	l=0;
	u=n-1;
	printf("Enter the elements of the array in ascending order:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d",&x);
	do{
		p=l+(((u-l)*(x-a[l]))/(a[u]-a[l]));
		if(x==a[p]){
			f=1;
			printf("Value found at index %d",p);
		}
		else if(x<a[p]){
			u=p-1;
		}
		else{
			l=p+1;
		}
	}while(f==0&&l<=u);
	if(f==0){
		printf("Value not found");
	}
}
