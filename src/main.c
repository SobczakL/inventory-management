#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr;

  fptr = fopen("books.csv", "w");

  if (fptr == NULL) {
    printf("Not open");

    exit(0);
  } else {
    printf("Opened");
    exit(0);
  }
  return 0;
}
