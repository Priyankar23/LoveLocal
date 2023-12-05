#include <stdio.h>
#include<string.h>
int lengthOfLastWord(char *s) {
    int lastWordLength = 0;
    int isWord = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            if (!isWord) {
                isWord = 1;
                lastWordLength = 0;
            }
            lastWordLength++;
        } else {
            if (isWord) {
                return lastWordLength;
            }
            isWord = 0;
        }
    }

    if (isWord) {
        return lastWordLength;
    }

    return 0;
}

int main() {
    char s[] = "Hello World";
    int length = lengthOfLastWord(s);
    printf("Length of last word: %d\n", length);

    return 0;
}
