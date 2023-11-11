#include <stdio.h>
#include <ctype.h>

void strToLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char s1[] = "Hello World";
    strToLower(s1);
    printf("Lowercase: %s\n", s1);
    return 0;
}
