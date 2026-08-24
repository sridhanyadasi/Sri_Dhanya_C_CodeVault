/* .Write a C program to declare an integer, float, and character variable. Take data from the user all data(datatype) at a time.
  hint: single scanf() */

#include<stdio.h>
void main()
{
    int laptop;
    float weight;
    char word;

    printf("Enter int laptop,float weight,char word : ");
    scanf("%d%f%c\n", &laptop,&weight,&word);

     printf("%d %f %c", laptop,weight,word);


}
