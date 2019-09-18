#include <stdio.h>

char *sort(char *);
int length(char *);
int strcompare(char *, char *);

int main(int argc, char *argv[]) {
  if(argc == 3) {
    char *word1 = argv[1];
    char *word2 = argv[2];
    printf("First Word: %s\n", word1);
    printf("Second Word: %s\n", word2);
    word1 = sort(word1);
    word2 = sort(word2);
    int result = strcompare(word1, word2);
    if(result != -1) {
      printf("They are anagram\n");
    } else {
      printf("They are not anagram\n");
    }
  } else {
    printf("Please provide only two arguments...\n");
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

char *sort(char *word) {
  int len = length(word);
  for(int i = 0; i < len; i++) {
    for(int j = 0; j < len; j++) {
      if(*(word + i) < *(word + j)) {
        char temp = *(word + i);
        *(word + i) = *(word + j);
        *(word + j) = temp;
      }
    }
  }
  return word;
}

int strcompare(char *word1, char *word2) {
  int len = length(word1);
  int lenDummy = length(word2);
  if(len != lenDummy) {
    return -1;
  }
  for(int i = 0; i < len; i++) {
    if(*(word1 + i) != *(word2 + i)) {
      return -1;
    }
  }
  return 0;
}
