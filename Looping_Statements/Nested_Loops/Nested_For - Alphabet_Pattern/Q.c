/* Letter Q */

#include<stdio.h>
void main()
{
    int size=13;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((i==0&&j!=0&&j<(size-(size/2)))||(j==0&&i!=size-1&&i!=0)||(i==size-1 && j!=0)||(j==size-(size/2)&&i!=0)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


/*

output :

 ******
*      *
*      *
*      *
*      *
*      *
*      *
*      *
*      *
*      *
*      *
*      *
 ************

*/


