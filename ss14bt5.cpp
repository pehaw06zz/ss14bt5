#include <stdio.h>
#include <string.h> 
int main() {
    char str[] = "Hello World";
    printf("Chuoi da khai bao: %s\n", str);
    int word_count = 0;
    int in_word = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    printf("So tu trong chuoi: %d\n", word_count);
    return 0;
}

