#include <stdio.h>  

 

int main(int argc, char *argv[])  

{  

        int i, j = 0;  

        for (i = 0; i < 100; i++) { // Removed semicolon.
           j += 3; // Set value to 3.
        }

 

        printf("The value of j is: %d\n", j);  

        return 0;  

}