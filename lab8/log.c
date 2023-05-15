
// C program to implement
// log2(x)
#include <math.h>
#include <stdio.h>
  
// Driver code
int main()
{
    double result, num = 67.9;
    result = log2(num);
    printf("log2(%lf) = %lf", 
            num, result);
    return 0;
}