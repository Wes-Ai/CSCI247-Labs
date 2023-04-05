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
        strcpy(twoChar, s + (lastIndex - 1)); //Copy the last 2 chars of the input word
        if (strcmp(twoChar, t) == 0) {  // Compare last 2 of word with given ending
            return true;    // They match!
        }
        else {
            return false;   // No match!
        }
    }
    else if (compareLength == 1) {
        return false;
    }
    return false;
}

void main() {

    // Manual list of -endings
    char ife[] = "ife";
    char sh[] = "sh";
    char ch[] = "ch";
    char us[] = "us";
    char ay[] = "ay";
    char oy[] = "oy";
    char ey[] = "ey";
    char uy[] = "uy";
    char y[] = "y";
    char s[] = "s";

    char temp[20];

    // User input
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    char word[25];
    printf("Enter word: ");
    scanf("%s", word);

    int wordLength = strlen(word);

    // Level 1
    if (num == 1) {
        printf("%d %s\n", num, word);
    }
    else if (ends_with(word, ife)) {
        strncpy(temp, word, (wordLength - 3));  // Copy the word minus the ending to temp. "Strife" -> "Str"
        strcat(temp, "ives");   // Build the final word w/ ending, "Str" -> "Strives"
        printf("%d %s\n", num, temp);
    }   
    // 2 length endings here (could be condensed)
    else if (ends_with(word, sh)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "shes");
        printf("%d %s\n", num, temp);
    }
    else if (ends_with(word, ch)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "ches");
        printf("%d %s\n", num, temp);
    }
    else if (ends_with(word, us)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "i");
        printf("%d %s\n", num, temp);
    }
    else if (ends_with(word, ay)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "ays");
        printf("%d %s\n", num, temp);
    }
    else if (ends_with(word, oy)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "oys");
        printf("%d %s\n", num, temp);
    }else if (ends_with(word, ey)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "eys");
        printf("%d %s\n", num, temp);
    }
    else if (ends_with(word, uy)) {
        strncpy(temp, word, (wordLength - 2));
        strcat(temp, "uys");
        printf("%d %s\n", num, temp);
    }
    else {  //Add S to everything else
        strncat(word, s, 1);
        printf("%d %s\n", num, word);
    }
}
