#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main(){
	int n,e1,e2,x1,x2,i,F,L;
	printf("Enter the number of stations: ");
	scanf("%d",&n);
	int t1[n-1],t2[n-1],a1[n],a2[n],f1[n+1],f2[n+1],l1[n+1],l2[n+1];
	printf("\nEnter the cost of starting station of line 1: ");
	scanf("%d",&e1);
	printf("\n\nline 1\n\n");
	for(i=0;i<n;i++){
		printf("Enter the cost of station %d: ",i);
		scanf("%d",&a1[i]);
	}
	printf("\nEnter the cost of ending station of line 1: ");
	scanf("%d",&x1);
	printf("\n\nEnter the cost of starting station of line 2: ");
	scanf("%d",&e2);
	printf("\n\nline 2\n\n");
	for(i=0;i<n;i++){
		printf("Enter the cost of station %d: ",i);
		scanf("%d",&a2[i]);
	}
	printf("Enter the cost of ending station of line 2: ");
	scanf("%d",&x2);
	printf("\n\nTransfer cost from line 1 to line 2\n\n");
	for(i=0;i<n-1;i++){
		printf("From station %d to %d: ",i,i+1);
		scanf("%d",&t1[i]);
	}
	printf("\n\nTransfer cost from line 2 to line 1\n\n");
	for(i=0;i<n-1;i++){
		printf("From station %d to %d: ",i,i+1);
		scanf("%d",&t2[i]);
	}
	f1[0]=e1+a1[0];
	f2[0]=e2+a2[0];
	for(i=1;i<n;i++){
		if(f1[i-1]+a1[i]<=f2[i-1]+t2[i-1]+a1[i]){
			f1[i]=f1[i-1]+a1[i];
			l1[i]=1;
		}
		else{
			f1[i]=f2[i-1]+t2[i-1]+a1[i];
			l1[i]=2;
		}
		if(f2[i-1]+a2[i]<=f1[i-1]+t1[i-1]+a2[i]){
			f2[i]=f2[i-1]+a2[i];
			l2[i]=2;
		}
		else{
			f2[i]=f1[i-1]+t1[i-1]+a2[i];
			l2[i]=1;
		}
	}
	if(f1[n-1]+x1<=f2[n-1]+x2){
		F=f1[n-1]+x1;
		L=1;
	}
	else{
		F=f2[n-1]+x2;
		L=2;
	}
	printf("\n\nThe min cost is %d from line %d",F,L);
	
}
