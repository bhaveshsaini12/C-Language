#include<stdio.h>

// This program calculates the area of a triangle based on user input for the base and height.

int main(){

    int base,height;
    

    printf("enter the base of triangle\n");
    scanf("%d", &base);

    printf("enter the height of triangle\n");
    scanf("%d", &height);

    printf("the area of triangle is %d\n", (base*height)/2);


    return 0;
    
}