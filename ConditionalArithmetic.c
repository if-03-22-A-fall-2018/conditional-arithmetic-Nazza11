/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Conditional Arithmetic
 * Author:	  Vinzent Kronreif
 * ----------------------------------------------------------
 * Description:
 *
 * ----------------------------------------------------------
*/

#include <stdio.h>

void selection(int *choice, int *number){

  do {
    printf("Select Add (1) or Multiply (2): ");
    scanf("%d", choice);
  } while(*choice != 1 && *choice != 2);

  do {
    printf("Select a number in the range (1-100): ");
    scanf("%d", number);
  } while(*number < 1 || *number > 100);

}

void printResult(int number){
  printf("The result is: %d\n", number);
}

void add(int number) {
  int result;

  for (size_t i = number; i > 0; i--) {
    if (i % 3 == 0|| i % 5 == 0) {
      result += i;
    }
  }
  printResult(result);
}

void multiply(int number) {
  int result = 1;

  for (size_t i = number; i > 0; i--) {
    if (i % 3 == 0 || i % 5 == 0) {
      result *= i;
    }
  }

  if (result == 1) {
    result = 0;
  }
  printResult(result);
}

void execute(int choice, int number) {
  switch (choice) {
    case 1:
      add(number);
      break;
    case 2:
      multiply(number);
      break;
  }
}

int main(int argc, char const *argv[]) {
  int choice;
  int number;

  selection(&choice, &number);
  execute(choice, number);

  return 0;
}
