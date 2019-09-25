#include <stdio.h>
#include <stdlib.h>

int main() {
  char *name = malloc(100);
  if(name) {
    char c;
    int i = 0;
    printf("Type your name(max: 100): ");
    while((c = getchar()) != '\n') {
      *(name + i) = c;
      i++;
    }
    *(name + i) = '\0';
    printf("Your name is: %s\n", name);
    free(name);
  } else {
    printf("Failed to allocate enough memory!\n");
  }
  return 0;
}
