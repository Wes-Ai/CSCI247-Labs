#include<stdio.h>  

 

int main(int argc, char *argv[])  

{  

        int a[10];  

        int *a1;  

 

        a1 = a;  

        a1 = 0;  //This set the memory value to 0.

        a1[0] = 1; // cannot use an array call on a pointer?

        return 0;  

}