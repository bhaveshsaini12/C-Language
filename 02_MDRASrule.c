#include<stdio.h>
#include<math.h>  // this lie is use for mathematical interpretation in c-langauge.

/*

this program is writtten to demonstate MDRAS rule (moe like our BODMAS rule)
M=> MULTIPLICATION ; D=> DIVISION ; R(%)=> REMAINDER ; A=> ADDITION ; S=> SUBSTRACTION 
and calculation starts from left to right .

*/



int main(){

    int a=2*4/8-7;
    printf("%d\n", a);
    
    int b=5*2/2*3;
    printf("the value of b :%d\n", b);
    
    int c=3%2;
    printf("the value of remainder is : %d\n", c);

    
    
    
    return 0;
}