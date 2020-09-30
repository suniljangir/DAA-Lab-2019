#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>

struct NODE
{
 int data;
 struct NODE *link;
};
NODE *Head;
insert()
{
 int x;
 NODE *N;
 printf("\n Enter the data for the new NODE:");
 scanf("%d",&x);
 if(Head==NULL)
 {
  N=(NODE *)malloc(sizeof(struct NODE));
  N->data=x;
  N->link=NULL;
  Head=N;
 }
 else
 {
  N=(NODE *)malloc(sizeof(struct NODE));
  N->data=x;
  N->link=Head;
  Head=N;
 }
}
traverse()
{
 NODE *ptr;
 printf("\n");
 ptr=Head;
 while(ptr!=NULL)
 {
  printf("%d->\t",ptr->data);
  ptr=ptr->link;
 }
 getch();
}
search()
{
 NODE *ptr;
 ptr=Head;
 int i=0,found=0,key;
 if(Head==NULL)
 {
  printf("\n The given list is empty");
 }
 else
 {
  printf("\n Enter the key value:");
  scanf("%d",&key);
  while(ptr!=NULL)
  {i++;
   if(ptr->data==key)
   {
    printf("\n Search successful at location %d",i);
    found=1;
   }
   ptr=ptr->link;
  }
  if(found==0)
  {
   printf("\n Search Unsuccessful");
  }
 }
 getch();
}
main()
{
 int choice;
 L: clrscr();
 printf("\n Menu for single linked list operations");
 printf("\n 1.Insertion");
 printf("\n 2.Searching");
 printf("\n 3.Traversal");
 printf("\n 4.Exit");
 printf("\n Make your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: insert();
	  goto L;
  case 2: search();
	  goto L;
  case 3: traverse();
	  goto L;
  case 4: exit(0);
 }
getch();
}
