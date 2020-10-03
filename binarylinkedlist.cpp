#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{int data;
 struct node *link;
};
node *head;
void insert()
{int x;
 node *n;
 printf("\nenter the value to be enetered in list");
 scanf("%d",&x);
 if(head==NULL)
 {n=(node*)malloc(sizeof(struct node));
  n->data=x;
  n->link=NULL;
  head=n;
 }
 else
 {n=(node*)malloc(sizeof(struct node));
  n->data=x;
  n->link=head;
  head=n;
 }
}
void show()
{node *ptr;
 ptr=head;
 while(ptr!=NULL)
 {printf("%d ",ptr->data);
  ptr=ptr->link;
 }
 getch();
}
struct node* mid_node(node* start, node* last){
   if (start == NULL)
      return NULL;
   struct node* slow = start;
   struct node* fast = start -> link;
   while (fast != last){
      fast = fast -> link;
      if (fast != last){
         slow = slow -> link;
         fast = fast -> link;
      }
   }
   return slow;
}
struct node* binarysearch(node *head,int value){	
   node* start = head;
   node* last = NULL;
   do{
      node* mid = mid_node(start, last);
      if (mid == NULL)
         return NULL;
      if (mid -> data == value)
         return mid;
      else if (mid -> data < value)
         start = mid -> link;
      else
         last = mid;
   }
   while (last == NULL || last != start);
      return NULL;
}
void search()
{int value;
 printf("\nenter the elemnt to be searched");
 scanf("%d",&value);
 if (binarysearch(head, value) == NULL)
      printf("Value is present in linked list\n");
else
      printf("The value is present in linked list\n");
getch();      
}

main()
{int ch;
 l: system("cls");
 printf("\noperations for binary search");
 printf("\nenter 1 for insertion of elements in list");
 printf("\nenter 2 for traversing");
 printf("\nenter 3 for searching any element");
 printf("\nenter 4 for exit");
 printf("\nenter your choice as per requiremnet");
 scanf("%d",&ch);
 switch(ch)
 {case 1:insert();
          goto l;
  case 2:show();
         goto l;
  case 3:search();
         goto l;
         goto l;       
  case 4:exit(0);              
 }
}
