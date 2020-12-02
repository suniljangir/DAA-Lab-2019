#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main(){
	int i,n,j,d,min,q,w;
	printf("Enter the total number of dimensions: ");
	scanf("%d",&n);
	int p[n],c[n][n],k[n][n];
	printf("Enter the dimensions: ");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		c[i][i]=0;
		c[0][i]=0;
		c[i][0]=0;
		k[i][i]=0;
		k[0][i]=0;
		k[i][0]=0;
	}
	for(d=1;d<n;d++){
		for(i=1;i<n-d+1;i++){
			j=i+d;
			c[i][j]=INT_MAX;
			for(w=i;w<j;w++){
				q=c[i][w]+c[w+1][j]+p[i-1]*p[w]*p[j];
				if(q<c[i][j]){
					c[i][j]=q;
				}
			}
		}
	}
	printf("\n\nThe min number of multiplication is: %d",c[1][n-1]);
}
