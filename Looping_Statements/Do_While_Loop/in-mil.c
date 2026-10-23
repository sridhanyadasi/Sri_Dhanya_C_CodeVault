/*5. Create a unit conversion program that offers various conversion options, such as inches-centimeters,
feet-meters, miles-kilometers and vise-versa. Use a do-while loop to present the menu and perform unit conversions based on the user's choice.
Allow the user to exit the program by selecting an appropriate option.
Formulae:
centimeters = inches * 2.54, inches = centimeters / 2.54
 meters = feet * 0.3048, feet = meters / 0.3048
 kilometers = miles * 1.60934, miles = kilometers / 1.60934*/

 #include<stdio.h>
 void main()
 {
     int conversion;

     do
     {
         printf("1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit\n");
         scanf("%d",&conversion);

         switch(conversion)
         {
         case 1:

            {
                float centimeters;
                printf("enter centimeter value :");
                scanf("%f",&centimeters);

                float in=centimeters/2.54;
                printf("unit coversion of a inches is : %f\n",in);
                break;

            }
         case 2:

            {
                float inches;
                printf("enter inches value :");
                scanf("%f",&inches);

                float cen=inches*2.54;
                printf("unit coversion of a centimeters is :%f\n",cen);
                break;

            }
         case 3:

            {
                float meters;
                printf("enter meters value :");
                scanf("%f",&meters);

                float fe=meters/0.3048;
                printf("unit coversion of a meters is :%f\n",fe);
                break;

            }
         case 4:

            {
                 float feet;
                printf("enter a value : ");
                scanf("%f",&feet);


                float met=feet*0.3048;
                printf("unit coversion of a feet is :%f\n",met);
                break;
            }
         case 5:

            {
                float kilometers;
                printf("enter kilometers value : ");
                scanf("%f",&kilometers);

                float mi=kilometers/1.60934;
                printf("unit coversion of a kilometers is :%f\n",mi);
                break;
            }
         case 6:

            {
                float miles;
                printf("enter miles value : ");
                scanf("%f",&miles);

               float kil=miles*1.60934;
                printf("unit coversion of a miles is :%f\n",kil);
                break;
            }
         case 7:

            {
                printf("exit");
                break;
            }
         default :

          {
            printf("Invalid\n");
            break;
          }
         }

     }while(conversion!=7);


 }

 /*

 Execution Steps :

 1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
1
enter centimeter value :6
the unit conversion of inches-centimeters is : 2.362205
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
2
enter inches value :4
the unit conversion of centimeters-inches is :10.160000
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
3
enter meter value :8
the unit conversion of feet-meters is :26.246719
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
4
enter feet value :5
the unit conversion of meters-feet is :1.524000
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
5
enter kilometers value :7
the unit conversion of miles-kilometers is :4.349609
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
6
enter miles value :1
the unit conversion of kilometers-miles is :1.609340
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
1
enter centimeter value :5
the unit conversion of inches-centimeters is : 1.968504
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
2
enter inches value :8
the unit conversion of centimeters-inches is :20.320000
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
3
enter meter value :7
the unit conversion of feet-meters is :22.965879
1.inches 2.centimeters 3.feet 4.meters 5.miles 6.kilometers 7.exit
7
exit

*/
