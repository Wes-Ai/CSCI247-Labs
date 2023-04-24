#include<stdio.h>  

 

int main(int argc, char *argv[])  

{  

        int a[10];  

        int *a1;  

 

        a1 = a;  

        //a1 = 0;  This sets the memory value to 0
        // You no longer have access to change the value at that point.

        a1[0] = 1;

        return 0;  

}