/* 9.Write a  program to find the frequency of each digit in a given integer using a switch case. */

#include<stdio.h>
void main()
{
    int n,m;

    printf("enter a digit :");
    scanf("%d",&n);

     int count=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0;

    while(n>0)
    {
       m = n%10;

       n/=10;

        switch(m)
        {
      case 0:
           count++;
            break;
      case 1:
            count1++;
            break;
      case 2:
            count2++;
            break;
      case 3:
            count3++;
            break;
      case 4:
            count4++;
            break;
      case 5:
            count5++;
            break;
      case 6:
            count6++;
            break;
       case 7:
            count7++;
            break;
       case 8:
            count8++;
            break;
        case 9:
            count9++;
            break;
       }
    }

    printf("0: %d\n", count);
    printf("1: %d\n", count1);
    printf("2: %d\n", count2);
    printf("3: %d\n", count3);
    printf("4: %d\n", count4);
    printf("5: %d\n", count5);
    printf("6: %d\n", count6);
    printf("7: %d\n", count7);
    printf("8: %d\n", count8);
    printf("9: %d\n", count9);




}
