#include <stdio.h>

int length(char *);
void capitalize(char *);

int main(int argc, char *argv[]) {
  if(argc != 2 )
    printf("Please provide only one argument. Multiple words should be put inside quote...\n");
  else {
    char *word = argv[1];
    int len = length(word);
    for(int i = 0; i < len; i++)
      if(*(word + i) == *word || *((word + i - 1)) == ' ')
        capitalize((word + i));
    printf("Capitalized: %s\n", word);
  }
  return 0;
}

int length(char *word) {
  int len = 0, i = 0;
  char c = *word;
  while(c != '\0') {
    len++;
    i++;
    c = *(word + i);
  }
  return len;
}

void capitalize(char *c) {
  if(*c > 96)
    *c = *c - 32;
}
