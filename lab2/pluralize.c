#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool ends_with(const char* s, const char* t) {  // s = big word
    // Set up indexing variables
    int compareLength = strlen(t);
    int wordLength = strlen(s);
    int lastIndex = wordLength - 1;

    char oneChar[20];
    char twoChar[20];
    char threeChar[20];

    if(compareLength == 3) {
        strcpy(threeChar, s + (lastIndex - 2)); //Copy the last 3 chars of the input word
        if (strcmp(threeChar, t) == 0) {  // Compare last 3 of word with given ending
            return true;    // They match!
        }
        else {
            return false;   // No match!
        }
    }
    else if (compareLength == 2) {
        strcpy(twoChar, s + (lastIndex - 1)); //Copy the last 3 chars of the input word
        if (strcmp(threeChar, t) == 0) {  // Compare last 3 of word with given ending
            return true;    // They match!
        }
        else {
            return false;   // No match!
        }
    }
    else if (compareLength == 1) {
        return true;
    }
}

void main() {

    char ife[] = "ife";
    char oneChar[20];
    char twoChar[20];
    char threeChar[20];
    char returnWord[20];

    // User input
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    char word[25];
    printf("Enter word: ");
    scanf("%s", word);

    int wordLength = strlen(word);



    

    // Set up end-of-word comparison strings
    // strcpy(threeChar, word + (lastIndex - 2));
    // strcpy(twoChar, word + (lastIndex - 1));
    // strcpy(oneChar, word + (lastIndex));

    // Testing to see variables are printed correctly
    // printf("Last 3: %s\n", threeChar);
    // printf("Last 2: %s\n", twoChar);
    // printf("Last 1: %s\n", oneChar);


    char s = 's';

    char * pch;

    char temp[20];

    // Level 1
    if (num == 1) {
        printf("%d %s\n", num, word);
    }
    else if (ends_with(word, ife)) {
        strncpy(temp, word, (wordLength - 3));  // Copy the word minus the ending to temp. "Strife" -> "Str"
        strcat(temp, "ives");   // Build the final word w/ ending, "Str" -> "Strives"
        printf("%d %s\n", num, temp);
    }



    // else if (strcmp(threeChar, ife) == 0) {
    //     strncpy(returnWord, word, (lastIndex - 2)); //TODO: strncpy instead of strcpy!!!!!
    //     printf("%d %s\n", num, returnWord);
    // }



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
