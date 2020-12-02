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
void search()
{int x1,c=0;
 node *ptr;
 ptr=head;
 printf("\nenter the element to be searched");
 scanf("%d",&x1);
 if(head!=NULL)
 {while(ptr!=NULL)
  {if(ptr->data==x1)
   {c++;
    printf("element is found");
    break;
   }
   else
   {ptr=ptr->link;
   }
  }
  if(c==0)
  printf("\nelement is not found");
 }
 else
 {printf("\nlist is emppty, enter some elements first");
 }
 getch();
}
main()
{int ch;
 l: system("cls");
 printf("\noperations for linear search");
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
  case 4:exit(0);              
 }
}
