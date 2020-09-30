#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{int data;
 struct node *link;
};
void insertfront(struct node** head_ref, int new_data) 
{struct node* new_node = new node; 
 new_node->data = new_data; 
 new_node->link = (*head_ref); 
 (*head_ref) = new_node; 
} 
void show(struct node *node) 
{while (node != NULL) 
 {printf("%d ", node->data); 
  node = node->link; 
 } 
 printf("\n"); 
} 
struct node *getTail(struct node *cur) 
{while (cur != NULL && cur->link != NULL) 
 {cur = cur->link;}
 return cur; 
}
struct node *partition(struct node *head, struct node *end, struct node **newHead, struct node **newEnd) 
{struct node *pivot = end, *prev = NULL, *cur = head, *tail = pivot; 
 while (cur != pivot) 
 {if (cur->data < pivot->data) 
  {if ((*newHead) == NULL) 
   (*newHead) = cur; 
  prev = cur;  
  cur = cur->link; 
  } 
  else
  {if (prev) 
    prev->link = cur->link; 
   struct node *tmp = cur->link; 
   cur->link = NULL; 
   tail->link = cur; 
   tail = cur; 
   cur = tmp; 
  } 
 } 
 if ((*newHead) == NULL) 
        (*newHead) = pivot; 
    (*newEnd) = tail; 
    return pivot; 
} 
struct node *quickSortRecur(struct node *head, struct node *end) 
{if (!head || head == end) 
  return head; 
 node *newHead = NULL, *newEnd = NULL; 
 struct node *pivot = partition(head, end, &newHead, &newEnd); 
 if (newHead != pivot) 
 {struct node *tmp = newHead; 
  while (tmp->link != pivot) 
            tmp = tmp->link; 
  tmp->link = NULL;
  newHead = quickSortRecur(newHead, tmp); 
  tmp = getTail(newHead); 
  tmp->link = pivot; 
 } 
 pivot->link = quickSortRecur(pivot->link, newEnd); 
 return newHead; 
} 
void quickSort(struct node **headRef) 
{ 
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef)); 
    return; 
} 
main()
{int n,i,data;
 struct node *a = NULL; 
 printf("\nEnter the Number of elements");
 scanf("%d",&n);
 while(n--)
 {printf("\nEnter the element to be sorted");
  scanf("%d",&data);
  insertfront(&a,data);
 }
 printf("\nLinked list before sorting");
 show(a);
 quickSort(&a);
 printf("\nLinked list after sorting");
 show(a);
}
