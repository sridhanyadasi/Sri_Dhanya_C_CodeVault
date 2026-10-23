/*4.Develop a program for basic geometry calculations, including area and perimeter calculations for shapes like rectangles, triangles, and circles.
Use a do-while loop to present a menu and calculate geometry-based values based on the user's choice.
Allow the user to exit the program by selecting an appropriate option.*/

  #include<stdio.h>
  void main()
  {
     int option;

     do
     {
         printf("choose any option from the menu\n");
         printf("1.Rectangle 2.Triangle 3.Circle 4.Exit\n");
         scanf("%d",&option);

         if(option==1)
         {

                float length,breadth;
                printf("enter two number : ");
                scanf("%f%f",&length,&breadth);
                float area=length*breadth;
                float perimeter=2*(length+breadth);
                printf("Area of the Rectangle : %f\n",area);
                printf("Perimeter of the Rectangle : %f\n",perimeter);
         }

         else if(option==2)
            {
                float base,height;
                printf("enter two number : ");
                scanf("%f%f",&base,&height);
                float area=(1/2)*(base*height);
                float perimeter=base*height;
                printf("Area of the Triangle : %f\n",area);
                printf("Perimeter of the Triangle : %f\n",perimeter);

            }
         else if(option==3)
            {
                 float radius;
                 float pi=3.14;
                printf("enter a number : ");
                scanf("%f",&radius);
                float area=pi*radius*radius;
                float perimeter=2*(pi*radius);
                printf("Area of the Circle : %f\n",area);
                printf("Perimeter of the Circle : %f\n",perimeter);

            }
         else
            {
                printf("Invalid");
            }

         }
     while(option!=4);
  }
/*

   Execution Steps :

choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
1
enter two number : 2
4
8.000000
12.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
2
enter two number : 5
2
0.000000
10.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
3
enter a number : 4
50.240002
25.120001
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
2
enter two number : 3
5
0.000000
15.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
1
enter two number : 4
2
8.000000
12.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
2
enter two number : 6
3
0.000000
18.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
3
enter a number : 5
78.500000
31.400002
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
1
enter two number : 4
8
32.000000
24.000000
choose any option from the menu
1.Rectangle 2.Triangle 3.Circle 4.Exit
4
Invalid


*/
