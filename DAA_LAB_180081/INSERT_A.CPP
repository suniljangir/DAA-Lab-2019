#include <stdio.h>
#include <conio.h>
void main()
{ clrscr();
  int n, array[30], c, d, e, f=0;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 1 ; c <= n - 1; c++) {
    e = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > e) {
	array[d+1] = array[d];
	f = 1;
      }
      else
	break;
    }
    if (f)
      array[d+1] = e;
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }

  getch();
}