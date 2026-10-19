#include<stdio.h>
#include<math.h>


// this program is to check if a no. is divisible by 2 or not.


int main(){

int a,b;

printf("the value of a:\n");
scanf("%d",  &a);


printf("the value of b:\n");
scanf("%d", &b);


int c= a%2;
printf("a is divisible to 2  %d\n", c==0);

int d= b%2;
printf("b is divisible by 2  %d\n", d==0);

return 0;




}