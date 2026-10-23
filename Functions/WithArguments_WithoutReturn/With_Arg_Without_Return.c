//2.With Argument Without Return Type

#include <stdio.h>

//1.Function Declaration
void sub(int a , int b);

//2.Function Call

int main(){

   //int result = sub(2, 4);

   // printf("Addition of two numbers : %d", result);
    sub(10 , 4);

    return 0;


}

//3.Function definition

void sub(int a , int b){

    printf("Sub : %d" , a -b);

}
