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

Swap(NODE *p1, NODE *p2)
{
 int temp;
 temp=p1->data;
 p1->data=p2->data;
 p2->data=temp;
}

SelectionSort(NODE *Head)
{
 NODE *start=Head;
 NODE *t;
 NODE *min;
 while(start->link)
 {
  min=start;
  t=start->link;
  while(t)
  {
   if(min->data > t->data)
   {
    min=t;
   }
   t=t->link;
  }
  Swap(start,min);
  start=start->link;
 }
}

insertfront()
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
 SelectionSort(Head);
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

main()
{
 int choice;
 L: clrscr();
 printf("\n Menu for single linked list operations");
 printf("\n 1.Insertion");
 printf("\n 2.Traversal");
 printf("\n 3.Exit");
 printf("\n Make your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: insertfront();
	  goto L;
  case 2: traverse();
	  goto L;
  case 3: exit(0);
 }
getch();
}