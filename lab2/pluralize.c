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


    // char string[11] = "Hello World";

    // int length = strlen(string);
    // int index = length - 1;

    // printf("Last: %c\n", string[index]);

    char ife[] = "ife";
    char oneChar[20];
    char twoChar[20];
    char threeChar[20];

    // User input
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    char word[25];
    printf("Enter word: ");
    scanf("%s", word);

    // Set up indexing variables
    int length = strlen(word);
    int lastIndex = length - 1;

    // Set up end-of-word comparison strings
    strcpy(threeChar, word + (lastIndex - 2));
    strcpy(twoChar, word + (lastIndex - 1));
    strcpy(oneChar, word + (lastIndex));

    // Testing to see variables are printed correctly
    // printf("Last 3: %s\n", threeChar);
    // printf("Last 2: %s\n", twoChar);
    // printf("Last 1: %s\n", oneChar);


    char s = 's';

    char * pch;

    // Level 1
    if (num == 1) {
        printf("%d %s\n", num, word);
    }
    else if (strcmp(threeChar, ife) == 0) {
        printf("Poggers.");
    }
    // else if (strstr(word, "ife")) {
    //     int len = strlen(word);
    //     pch = strstr(word, "ife");
    //     if(pch != NULL) {
    //         strncpy(pch, "ives", len + 1);
    //     }
    //     printf("%d %s\n", num, word);
    else {
        strncat(word, &s, 1);
        printf("%d %s\n", num, word);
    }
}
