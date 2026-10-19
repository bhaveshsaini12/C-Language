#include<stdio.h>
#include<math.h>


// this program written it's monday OR it's raining .


int main(){

    printf("true with 1 and false with 0\n");



int ismonday;

printf("enter it's monday or not with 1 OR 0 \n");
      scanf("%d", &ismonday);

int israining;

printf("enter it's raining or not with 1 OR 0 \n");
      scanf("%d", &israining);

printf("statement is %d\n", ismonday || israining);


}