
// que no.1
#include <stdio.h>

int main(void) {
  int n, i, j, swap;
  printf("Enter a number of array's size for a series of numbers saving:\n");
  scanf("%d", &n);

  int A[n];
  printf("Enter a series of numbers:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

  for (i = 0; i < n - 1; i++) { // for n number of size, passes will be (n - 1)
    for (j = 0; j < n - 1 - i;j++) { // (n-1) is for no. of comp. and (-i ) bec. for every pass one
                // comp. should red.
      if (A[j] > A[j + 1]) { // condition for swap and comparision
        swap = A[j];
        A[j] = A[j + 1];
        A[j + 1] = swap;
      }
    }
  }
  printf("After sorting, the numbers are: ");
  for (i = 0; i < n; i++)
    printf("%d ", A[i]);
  printf("\n");

  return 0;
}

// que no. 2
#include <stdio.h>

int main(void) {
  int n, i, j, swap;
  printf("Enter a number of array's size for a series of numbers saving:\n");
  scanf("%d", &n);

  int A[n];
  printf("Enter a series of numbers:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

  for (i = 0; i < n - 1; i++) { // for n number of size, passes will be (n - 1)
    for (j = 0; j < n - 1 - i; j++) {
      if (A[j] > A[j + 1]) { // condition for swap and comparision
        swap = A[j];
        A[j] = A[j + 1];
        A[j + 1] = swap;
      }
    }
  }
  printf("After sorting, the numbers are: ");
  for (i = 0; i < n; i++) {
    if (A[i] % 2 == 1) { // to print odd sorted number
      printf("%d ", A[i]);
    }
  }
  for (i = 0; i < n; i++) {
    if (A[i] % 2 == 0) { // to print even sorted number
      printf("%d", A[i]);
    }
  }

  return 0;
  printf("\n");
}

// que 3
#include <stdio.h>
int main(void) {
  int n, pieces;
  printf("Enter how many cuts you want:");
  scanf("%d", &n); // input from user
  pieces = 2 * n; // 1 cut=2 pieces,2 cut=4 pieces, then for n cut the pieces will be 2n.
  printf("the pieces will b: %d\n", pieces);
  return 0;
}

// que 4
#include <stdio.h>
int main(void) {

  int n, count = 0;
  printf("Enter decimal number:");
  scanf("%d", &n);
  while (n) {
    count = count + n % 2; // n%2 will give the digit 1 and 0. so, the count
                           // will add 1 and 0 in each repetit
    n = n / 2;
  }
  printf("there are %d ones in the given decimal number\n", count);

  return 0;
}
