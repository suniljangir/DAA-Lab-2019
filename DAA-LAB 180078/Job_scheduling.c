#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main(){
	int e,q,a,s,i,n,max,min,j,t,x=0;
	s=0;
	
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	
	int k[n],jb[n],d[n],p[n],pro[n];
	
	for(i=0;i<n;i++){
		pro[i]=i;
		printf("Enter the deadline of process %d: ",i);
		scanf("%d",&d[i]);
		printf("Enter the profit of process %d: ",i);
		scanf("%d",&p[i]);
		printf("\n");
	}
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++){
			if(p[max]<p[j]){
				max=j;
			}
		}
		if(max!=i){
			t=p[max];
			p[max]=p[i];
			p[i]=t;
			
			t=d[max];
			d[max]=d[i];
			d[i]=t;
			
			t=pro[max];
			pro[max]=pro[i];
			pro[i]=t;
		}
	}
	jb[0]=pro[0];
	k[0]=pro[0];
	a=1;
	while(a<n){
		q=0;
		for(j=0;j<a;j++){
				k[j]=jb[j];
				q++;
			}
		e=1;
		k[q]=pro[a];
		if(a==1){
			if(d[k[a-1]]>d[k[a]]){
				t=k[a-1];
				k[a-1]=k[a];
				k[a]=t;
			}
		}
		else{
			for(i=0;i<a-1;i++){
				min=i;
				for(j=i+1;j<=a;j++){
					if(d[k[min]]>d[k[j]]){
						min=j;
					}
				}
				if(min!=i){
					t=k[min];
					k[min]=k[i];
					k[i]=t;
				}
			}
		}
		for(i=0;i<=a;i++){
			if(d[k[i]]>=e){
				e++;
			}
			else{
				goto L;
			}
		}
		if(i>a){
			x=0;
			for(j=0;j<=a;j++){
				jb[j]=k[j];
				x++;
			}
		}
		L:a++;
	}
	printf("The job sequence is:\n");
	for(i=0;i<x-1;i++){
		s=s+p[jb[i]];
		printf("%d\t",jb[i]);
	}
	printf("\n\nThe total profit is: %d",s);
}
