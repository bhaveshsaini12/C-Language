#include<stdio.h>
#include<math.h>

// this program to check whether the input 'x' is x>9 AND x<100.

int main(){

int a;
 
printf("enter the integer:\n");
scanf("%d", &a);


printf("the value is true or not : true1/false0 %d\n", a>9 && a<100);

return 0;

}
