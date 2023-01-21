// Question no. 1
#include <stdio.h>
int main() {
  int a, b;
  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("\nEnter the value of b : ");
  scanf("%d", &b);
  a += b -= a = b - a;
  printf("\nAfter Swapping the value of a = %d\n b = %d", a, b);
  return 0;
}
// Question no. 2
#include <stdio.h>

int main(void) {
  int reverse = 0, num;
  printf("enter any number to get its reverse:\n");
  scanf("%d", &num);
  while (num != 0) {
    reverse = reverse * 10 + num % 10;
    num = num / 10;
  }
  printf("the reverse = %d\n", reverse);
  return 0;
}
// Question no. 3
#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("enter value for a, b& c :\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) {
    printf("a is greatest");
  }
  if (b > a && b > c) {
    printf("b is greatest");
  }
  if (c > a && c > b) {
    printf("c is greatest");
  }
  return 0;
}
// Question no. 4
#include <stdio.h>

int main(void) {
  int year;
  printf("Enter the year: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("%d is a leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}
// Question no. 5
#include <stdio.h>

int main(void) {
  int num;
  printf("enter a number: \n");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("%d is a even number\n", num);
  } else {
    printf("%d is a odd number\n", num);
  }

  return 0;
}
// Question no. 6
#include <stdio.h>

int main(void) {
  int num;

  printf("Read the integer from keyboard: ");
  scanf("%d", &num);

  for (int i = 0; i < 3; i++) {
    num = num << 1;
  }

  printf("The left shifted data is = %d", num);
  return 0;
}

// Question no. 7
#include <stdio.h>

int main(void) {
  char day;
  printf("enter m for Monday\n t for Tuesday\n w for Wednesday\n h for "
         "Thursday\n f for Friday\n s for Saturday\n u for sunday:");
  scanf("%c", &day);
  switch (day) {
  case 'm':
    printf("Monday");
    break;
  case 't':
    printf("Tuesday");
    break;
  case 'w':
    printf("Wednesday");
    break;
  case 'h':
    printf("Thursday");
    break;
  case 'f':
    printf("Friday");
    break;
  case 's':
    printf("Saturday");
    break;
  case 'u':
    printf("Sunday");
    break;
  default:
    printf("Nothing");
  }

  return 0;
}
#Question no .8
#include <stdio.h>

int main(void) {
  int num1, num2, input;
  printf("enter two numbers: ");
  scanf("%d%d", &num1, &num2);
  printf("enter 1 For sum\n 2 For multiply\n 3 For subtraction\n 4 For "
         "division: ");
  scanf("%d", &input);
  switch (input) {
  case 1:
    printf(" sum =%d", num1 + num2);
    break;
  case 2:
    printf("multiple = %d", num1 * num2);
    break;
  case 3:
    printf("substraction = %d", num1 - num2);
    break;
  case 4:
    printf("division =%d", num1 / num2);
    break;
  default:
    printf("Nothing");
  }

  return 0;
}
// Question no. 9
int main(void) {
  int n, sum = 0, i = 1;
  printf("enter a number : ");
  scanf("%d", &n);
  while (i <= n) {
    sum += i;
    i++;
  }
  printf("sum = %d", sum);
  return 0;
}

// Question no. 10
#include <stdio.h>
int main(void) {
  int i, j, num;
  printf("enter the number of rows: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++) {
    for (j = 1; j <= num - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
  for (i = num - 1; i >= 1; i--) {
    for (j = 1; j <= num - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
