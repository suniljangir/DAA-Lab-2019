#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
int data;
struct node *link;
};
struct node *head, *a;
void insert(){
int b;
struct node *ptr;
ptr = head;
printf("Enter the value of new node:");
scanf("%d", &b);
a=(struct node *)malloc(sizeof(struct node));
a -> data = b;
if(head==NULL){
a->link=NULL;
head=a;
}
else{
while(ptr->link != NULL){
ptr = ptr -> link;
}
a -> link=NULL;
ptr ->link=a;
}
}
void traverse(){
struct node *ptr;
ptr=head;
if(head==NULL){
printf("List is Empty");
getch();
}
else{
while(ptr!=NULL){
printf("%d ->", ptr ->data);
ptr=ptr ->link;
}
getch();
}
}
void search(){
struct node *ptr;
ptr=head;
int x=0, i=0, k;
if(head==NULL){
printf("List is Empty");
getch();
}
else{
printf("Enter the value you want to search:");
scanf("%d", &k);
while(ptr!=NULL||x==1){
if(ptr->data==k){
x=1;
break;
}
else{
ptr=ptr->link;
i=i+1;
}
}
if(x==1){
printf("The value %d is found at location: %d",k,i+1);
getch();
}
if(x==0){
printf(" Value is not found");
getch();
}
}
}
void main(){
int x;
L:system("cls");
printf("\n 1. Insertion");
printf("\n 2. Traversal");
printf("\n 3. Search");
printf("\n 4. Exit");
printf("\n Enter the option you want to perform:");
scanf("%d", &x);
switch(x){
case 1: insert();
	goto L;
case 2: traverse();
	goto L;
case 3: search();
	goto L;
case 4: exit(0);
default:
printf("Invalid choice");
getch();
goto L;
}
}
