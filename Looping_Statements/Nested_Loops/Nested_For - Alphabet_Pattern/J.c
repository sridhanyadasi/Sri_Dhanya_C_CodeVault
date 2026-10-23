/* Letter J */

#include<stdio.h>
void main()
{
    int size=11;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((i==0)||(j==(size-1)/2)||(j!=0&&i==(size-1)&&j<size/2)||(i!=(size-1)&&j==0&&(i>(size/2)))){
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

*********
    *
    *
    *
*   *
*   *
*   *
*   *
 ***


*/

