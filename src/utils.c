#include <ctype.h>
#include <stdio.h>
#include <utils.h>

void cleanStrings(char *wordToBeCleaned) {

  int j = 0;
  for (int i = 0; wordToBeCleaned[i] != '\0'; i++) {
    if (isalpha(wordToBeCleaned[i])) {
      wordToBeCleaned[j++] = toupper(wordToBeCleaned[i]);
    }
  };
  wordToBeCleaned[j] = '\0';
}
