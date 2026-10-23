//1.With Argument With Return Type

#include<stdio.h>

//1.Function Declaration : to tell the compiler return_type , function_name,arguments
    int          add(int a , int b);
//return_Type  Function_nam


//2.Function Call
void main(){

    int result = add(2, 4);  //Function call


    printf("Addition of two numbers : %d\n", result);
    printf("Addition of two numbers : %d\n", add(4, 6));
    printf("Addition of two numbers : %d\n", add(5,10));
    printf("Addition of two numbers : %d", add(3 , 2));

}

//3.Function Definition

//return_type function_Name (Parameter_Type parameter_Name)

int add (int a, int b){

    return a + b;  //return to main  //body

}


/*

int a =15, b=10;
    int c = a + b;
    printf("Result : %d", c);

    int d = 10 , e = 5;
    printf("Result : %d", d+e);

    int f = 4 , g=7;
    printf("Result : %d", f+g);

    int d = 10 , e = 5;
    printf("Result : %d", d+e);

    int f = 4 , g=7;
    printf("Result : %d", f+g);

    */
