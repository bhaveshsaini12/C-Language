#include<stdio.h>

// this program is written for continous counting untill the input.

int main(){
    int m;
    printf("enter the counting till you want:\t");
    scanf("%d", &m);

/*for(int i=0; i<=m; i=i+1){
    printf("%d\n", i);
}
    */
   int i=0;
   while(i<=m){
    printf("%d",i);
    i++;
   }


    return 0;
}