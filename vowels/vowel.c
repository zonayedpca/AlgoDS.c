#include <stdio.h>
#define VOWELS_NUM 5

void *toLowerCase(char *);
int length(char *);
int countVowels(char *);

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("Please, enter only one arguments...\n");
  } else {
    char *word = argv[1];
    toLowerCase(word);
    int count = countVowels(word);
    printf("Total vowels found: %d\n", count);
  }
  return 0;
}

void *toLowerCase(char *word) {
  int len = length(word);
  for(int i = 0; i < len; i++) {
    if(*(word + i) >=65 && *(word + i) <= 90) {
      *(word + i) = (*(word + i) + 32);
    }
  }
}

int countVowels(char *word) {
  char vowels[VOWELS_NUM] = {'a', 'e', 'i', 'o', 'u'};
  int count = 0;
  int len = length(word);
  int comparison = 0;
  for(int i = 0; i < len; i++) {
    for(int j = 0; j < VOWELS_NUM; j++) {
      if(*(word + i) == vowels[j]) {
        count++;
        continue;
      }
    }
  }
  return count;
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
