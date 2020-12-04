#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
 struct node *link;
};
struct node *head,*N;
insert()
{int n;
 node *ptr;
 printf("\nEnter the Number to insert for sorting");
 scanf("%d",&n);
 if(head==NULL)
 {N=(struct node *)malloc(sizeof(struct node));
  N->data=n;
  N->link=NULL;
  head=N;
 }
 else
 {ptr=head;
  while(ptr->link!=NULL)
   {ptr=ptr->link;}
  N=(struct node*)malloc(sizeof(struct node));
  N->data=n;
  ptr->link=N;
  N->link=NULL;
 }
}
sorting()
{
}
traversal()
{int i;
 node *ptr;
 ptr=head;
 if(head== NULL)
  printf("\nNoelement, enter first:\n");
 else
 {printf("\nElements after sorting are:\n");
  while(ptr->link!=NULL)
  {printf("%d\t",ptr->data);
  }
 } 
 getch();
}
main()
{int ch;
 l:system("cls");
 printf("\nOperations on Linked List for Sorting elements");
 printf("\n1:Insertion of element");
 printf("\n2:Sorting Via Selection Sort");
 printf("\n3:Traversal");
 printf("\n4:exit");
 printf("\nEnter your Choice");
 scanf("%d",&ch);
 switch(ch)
 {case 1:insert();
         goto l;
  case 2:sorting();
         goto l;
  case 3:traversal();
         goto l;
  case 4:exit(1);
 }
 getch();
}
