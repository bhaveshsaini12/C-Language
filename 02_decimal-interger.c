#include<stdio.h>
#include<math.h>

// this programm converts decimal value into [integer] , [i] means greatest integer value .
/*
in C language, we can only convert decimal into [integer] only .
like: input=> int a= (int) 1.09999999992; 
      output=> 1 (this c language does , not 2 bcuz C language only takes expicite values)
*/
int main(){ 


    int a= (int) 1.9999999999999;
    printf("the greatest integer value :%d\n", a);

    return 0;

}