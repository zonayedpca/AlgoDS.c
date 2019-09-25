#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main() {
  int *array = calloc(sizeof(int), ARRAY_SIZE);
  if(array) {
    for(int i = 0; i < ARRAY_SIZE; i++) {
      printf("Enter the element: ");
      scanf("%d", (array + i));
    }
    printf("Priting all the elements...\n");
    for(int i = 0; i < ARRAY_SIZE; i++) {
      printf("Element is: %d \n", *(array + i));
    }
    free(array);
  } else {
    printf("Failed to allocate enough memory!\n");
  }
  return 0;
}
