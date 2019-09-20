#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("Please enter the steps number in one argument\n");
  } else {
    int steps = atoi(argv[1]);
    for(int i = 1; i <= steps; i++) {
      for(int j = 0; j < i; j++) {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
