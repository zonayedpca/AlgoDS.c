#include <stdio.h>

int length(char *);

int main(int argc, char *argv[]) {
  if(argc != 2)
    printf("Please provie only one argument. Use quote if you have space in your argument\n");
  else {
    char *str = argv[1];
    int len = length(str);
    char resultstr[len];
    for(int i = len - 1, j = 0; i >= 0 && j < len; i--, j++) {
      resultstr[j] = *(str + i);
    }
    resultstr[len] = '\0';
    printf("Resulting string is: %s \n", resultstr);
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
