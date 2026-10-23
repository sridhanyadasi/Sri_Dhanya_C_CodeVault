
//3.Without Argument With Return Type

#include <stdio.h>

//1.Function Declaration

int mul();

//2.Function Call

float main(){

   int result = mul();

    printf("Addition of two numbers : %d", result);

    return 0.0;


}

//3.Function definition

int mul(){

    int a =4, b=2;

    return a*b;

}
