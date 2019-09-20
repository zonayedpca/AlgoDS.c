#include <stdio.h>

int length(char *);
char *sort(char *);

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("Please, provide only one arguments\n");
  } else {
    char *number = argv[1];
    sort(number);
  }
  return 0;
}

char *sort(char *number) {
  int len = length(number);
  char result[len];
  for(int i = 0, j = len - 1; i < len, j >= 0; i++, j--) {
    result[i] = *(number + j);
  }
  result[len] = '\0';
  printf("The reveresed number is: %s\n", result);
}

int length(char *number) {
  int len = 0, i = 0;
  char c = *number;
  while(c != '\0') {
    len++;
    i++;
    c = *(number + i);
  }
  return len;
}
