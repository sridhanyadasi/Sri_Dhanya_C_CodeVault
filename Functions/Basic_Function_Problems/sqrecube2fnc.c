/* 6.Write a C program with two functions, one to calculate the square of an integer and another to calculate the cube of an integer.
 Call both functions from the main function and print the results. */

 #include<stdio.h>

 int square(int a);
 int cube(int a);

 void main()
 {
     int a;
     printf("Enter a number :");
     scanf("%d", &a);


    printf("Area of square : %d\n", square(a));

   printf("Area of cube : %d",cube(a));

 }

 int square(int a)
 {

     int AreaOfSquare = a*a;
     return AreaOfSquare;
 }

  int cube(int a)
  {

      int AreaOfCube = 6 * (a*a);
      return AreaOfCube;
  }


