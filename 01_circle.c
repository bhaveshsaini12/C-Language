#include<stdio.h>

// This program calculates the area of a circle based on user input for the radius.

int main() {
    int radius;
    float pi=3.14; 

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

         printf("The area of the circle is: %.2f\n", pi * radius * radius);
    return 0;   

}