#include<stdlib.h>
#include<stdio.h> 
#include<conio.h>
  
void merge(int arr[], int l, int m, int r); 
  
 
int min(int x, int y) { return (x<y)? x :y; } 
  
  
void mergeSort(int arr[], int n) 
{ 
   int curr_size;  // For current size of subarrays to be merged 
                   // curr_size varies from 1 to n/2 
   int left_start; // For picking starting index of left subarray 
                   // to be merged 
  
  
   for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size) 
   { 
       // Pick starting point of different subarrays of current size 
       for (left_start=0; left_start<n-1; left_start += 2*curr_size) 
       { 
          
           int mid = min(left_start + curr_size - 1, n-1); 
  
           int right_end = min(left_start + 2*curr_size - 1, n-1); 

	   // Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
	   merge(arr, left_start, mid, right_end);
       }
   }
   getch();
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[50], R[50];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
	L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
	R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
	if (L[i] <= R[j])
	{
	    arr[k] = L[i];
	    i++;
	}
	else
	{
	    arr[k] = R[j];
	    j++;
	}
	k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
	arr[k] = L[i];
	i++;
	k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
	arr[k] = R[j];
	j++;
	k++;
    }
}

/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
	printf("%d ", A[i]);
    printf("\n");
    getch();
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[50];
    int n ,i;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("\n enter the elements of array:");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    }
    printf("Given array is \n"); 
    printArray(arr, n); 
  
    mergeSort(arr, n); 
  
    printf("\nSorted array is \n");
    printArray(arr, n);

    getch();
    return 0;
} 