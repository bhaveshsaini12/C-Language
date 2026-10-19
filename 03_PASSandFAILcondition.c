#include<stdio.h>
#include<math.h>

// this program is written for FAIL OR PASS students 

int main(){

    int m;
    printf("enter the marks:\t");
    scanf("%d", &m);

    if(m>30 && m<=100){
// this condition is for student passed this year ,, well done buddy .

printf("well done buddy you passed \n");

if(m==69){
    printf("U ARE THE LEGEND AMONG ALL OUR STUDENT , SHOULD BE WORSHIPED\n");
}

if(m==67){
    printf("FOOL U WERE JUST 2 PERCENTAGE LOW TO BECOME LEGEND GODS OF OUR SCHOOL");
}

    }

else if(m>100){

    printf("U FOOL THIS IS INVAILD INPUT");
}

else {
    // this condition are for legends. 

    printf("legend your stories will be example for other students to encorauge to come school daily but BTW U FAILED :/ ");
}

return 0;
}
