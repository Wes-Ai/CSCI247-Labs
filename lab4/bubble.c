#include <stdio.h>


typedef struct {

     char *data;
     int key;
} item;


item array[] = {

     {"Bill", 62},
     {"Hill", 60},
     {"Barcak", 42},
     {"Dicky", 105},
     {"W.", 1},
};

  
// Sort the items

void sort(item *a, int n) { 

      int i = 0, j = 0;
      int s = 1; // Set s = 1, to start the loop in the first place.
      // s acts as a boolean value, if no swaps were done -> exit loop.

      for (; i < n && s != 0; i++) {

              s = 0;
              for (j = 0; j < n-1; j++) { // Have to subtract -1 from n,
              // This stops the array from checking out of bounds values
              // in the following if statement.
                       if (a[j].key > a[j+1].key) {
                               item t = a[j];
                               a[j] = a[j+1];
                               a[j+1] = t;
                               s++;
                       }
               }
              //n--;
              // Do not need to decrement n, as we are already
              // incrementing i in the loop above.
       }
}

int main() {

    sort(array,5); 

    return 0;
}
