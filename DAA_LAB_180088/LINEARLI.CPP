#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>
struct NODE{
  int element;
  struct NODE *link;
 };  NODE *Head;


  void  ins(){
  int p;
  NODE *n,*pntr;
  pntr=Head;
  printf("\n enter the element to insert");
  scanf("%d",&p);
  n=(NODE*)malloc(sizeof(struct NODE));
  n->element=p;
  if(Head==NULL)
  {
  n->link=NULL;
  Head=n;
  }
  else
  {
  while(pntr->link!=NULL)
  {
  pntr=pntr->link;
  }
    pntr->link=n;
  n->link=NULL;
}
}
void trav(){
struct NODE *pntr;
pntr=Head;
if(Head==NULL)
{
   printf("\n The given list is empty");
   getch();
   }
else{
     while(pntr!=NULL) {
     printf("%d->\t",pntr->element);
     pntr=pntr->link;
 }
 getch();
 }
 }
 void search()
 {
 int count=0,key_value,i=0;
struct NODE*pntr;
 pntr=Head;
   printf("\n enter number to be search");
   scanf("%d",&key_value);

  while(pntr!=NULL||count==1){
  if(pntr->element==key_value)
 {
   count=1;
  break;
  }
  else{
  i++;
  pntr=pntr->link;
  }
}
if(count==1)
{
   printf("\n %d is found at %d",key_value,i+1);

  }
  else{
      printf("\n The no. is not present");
}
getch();
}
   void main(){
   int ch;
  A: clrscr();
  printf("1. Insert the element\n");
  printf("2. Traverse the element\n");
  printf("3. Search the element\n");
  printf("4. Exit\n");
  printf("Enter your choice");
  scanf("%d",&ch);

  switch(ch){
     case 1:   ins();
		goto A;
     case 2:   trav();
		goto A;
     case 3:   search();
		goto A;
     case 4:   exit(0);
     default:
     printf("Choice entered is invalid.");
     getch();
     goto A;
     }
}

