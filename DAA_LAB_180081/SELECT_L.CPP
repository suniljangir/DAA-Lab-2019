#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *link;
};
struct node *head,*n;
void insert(){
	int x;
	struct node *ptr;
	ptr=head;
	printf("Enter the value of new node: ");
	scanf("%d",&x);
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	if(head==NULL){
		n->link=NULL;
		head=n;
	}else{
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		n->link=NULL;
		ptr->link=n;
	}
}
void traversal(){
	struct node *ptr;
	ptr=head;
	if(head==NULL){
		printf("List is empty");
		getch();
	}
	else{
		while(ptr!=NULL){
			printf("%d-> ",ptr->data);
			ptr=ptr->link;
		}
		getch();
	}
}
void sorted(int i,int n){
	int j,t,k,w;
	struct node *temp,*min,*ptr;
	w=i;
	if(i==n){
		return;
	}
	min=head;
	temp=head;
	while(w>1){
		temp=temp->link;
		min=min->link;
		w--;
	}
	for(j=i+1;j<=n;j++){
		k=j;
		ptr=head;
		while(k>1){
			ptr=ptr->link;
			k--;
		}
		if(min->data>ptr->data){
			min=ptr;
		}
	}
	if(min!=temp){
		t=min->data;
		min->data=temp->data;
		temp->data=t;
	}
	sorted(i+1,n);
}
void sorting(){
	struct node *ptr;
	ptr=head;
	int t=0;
	if(head==NULL){
		printf("List is empty");
		getch();
	}else{
		while(ptr!=NULL){
			ptr=ptr->link;
			t=t+1;
		}
		sorted(1,t);

	}
}
void main(){
	int c;
	L:system("cls");
	printf("1. Insertion\n");
	printf("2. Traversal\n");
	printf("3. Sorting\n");
	printf("4.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			insert();
			goto L;
		case 2:
			traversal();
			goto L;
		case 3:
			sorting();
			getch();
			goto L;
		case 4:
			exit(0);
		default:
			printf("Invalid choice...Enter your choice again");
			getch();
			goto L;
	}
	getch();
}
