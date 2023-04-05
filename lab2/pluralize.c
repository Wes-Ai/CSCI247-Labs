#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool ends_with(const char* s, const char* t) {  // s = big word
    int len = strlen(s);
    puts ("here0");
    char * compare;
    compare = strstr (s, "ife");
    puts ("here1");
    if (compare != NULL) {
        strncpy (compare, "ive", len);
    }
    puts ("here2");

    return true;
}

void main() {

    // * * * * * * * * * * * * * * * * * * * * * * * * *

    // char str[] ="Strife";
    // char * pch;
    // pch = strstr (str,"ife");
    // puts (pch);
    // int len = strlen(str);
    // if (pch != NULL)
    //     strncpy (pch,"ive", len);
    // puts (str);

    // * * * * * * * * * * * * * * * * * * * * * * * * *

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    char word[25];
    printf("Enter word: ");
    scanf("%s", word);
    
    char s = 's';
    char * pch;

    // Level 1
    if (num == 1) {
        printf("%d %s\n", num, word);
    }
    else if (strstr(word, "ife")) {
        int len = strlen(word);
        pch = strstr(word, "ife");
        if(pch != NULL) {
            strncpy(pch, "ives", len + 1);
        }
        printf("%d %s\n", num, word);
    }
    else {
        strncat(word, &s, 1);
        printf("%d %s\n", num, word);
    }
}
