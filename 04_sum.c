#include<stdio.h>

// this program is written sum of natural number till input value.


int main(){
    int sum=0;
    int m;
     printf("enter the counting till you want:\t");
    scanf("%d", &m);

for(int i=0; i<=m; i=i+1){
       sum= sum +i;
}
printf(" the sum of natural till number :%d\n", sum);
    return 0;
}