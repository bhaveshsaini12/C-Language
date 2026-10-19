#include <stdio.h>

// This program calculates the area of a rectangle based on user input for length and width.

int main() {
   int length, width;

       printf("enter the length\n");
        scanf("%d", &length);

     printf("enter the width\n");
     scanf("%d", &width);

      printf("the area is %d\n", length * width);
    return 0;
}