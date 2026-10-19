#include<stdio.h>

//this program is to show the table of the number input by the user.

int main(){
    
    int m;
     printf("enter the table u want:\t");
    scanf("%d", &m);

    
for(int i=0; i<=10; i=i+1){
       printf("%d\n", m*i);
}

    return 0;
}