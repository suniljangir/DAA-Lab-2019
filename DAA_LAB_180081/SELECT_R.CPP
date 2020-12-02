#include <stdio.h>
#include <conio.h>
void selection(int [], int, int, int, int);

void main()
{   clrscr();
    int arr[30], size, temp, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements in array:\n");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &arr[i]);
    }
    selection(arr, 0, 0, size, 1);
    printf("The sorted list in ascending order is\n");
    for (i = 0; i < size; i++)
    {
	printf("%d  ", arr[i]);
    }

    getch();
}

void selection(int arr[], int i, int j, int size, int flag)
{
    int temp;

    if (i < size - 1)
    {
	if (flag)
	{
	    j = i + 1;
	}
	if (j < size)
	{
	    if (arr[i] > arr[j])
	    {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	    selection(arr, i, j + 1, size, 0);
	}
	selection(arr, i + 1, 0, size, 1);
    }
}
