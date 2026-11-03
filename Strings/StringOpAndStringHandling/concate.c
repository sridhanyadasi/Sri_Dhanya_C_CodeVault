
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20]="divya";
    char str2[]="nandini";

    int i=0, j=0;
    while(str1[i]!='\0')
        {
            i++;
        }


    while(str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    //str1[i]!='\0';


    printf("Concate : %s", str1);







}

/*



    int i=0 , j=0;
    while(str[i]!='\0')
    {
        i++;
    }
    while(str1[j]!='\0')
    {
        str[i] = str1[j];
        i++;
        j++;
    }

    str[i] !='\0';
    printf("Concate : %s",str);


    Execution steps :

    Iteration 1
i = 0

str[0] = 'd'

d != '\0'

true

i++

Now

i = 1
Iteration 2
str[1] = 'i'

i++

Now

i = 2
Iteration 3
str[2]='v'

i=3
Iteration 4
str[3]='y'

i=4
Iteration 5
str[4]='a'

i=5
Iteration 6
str[5]='\0'

Condition becomes false.

Loop stops.

Now

i = 5

This points to the null character.

Initially

i=5
Iteration 1
j=0

str1[0]='n'

str[5]='n'

i=6

Memory

d i v y a n
Iteration 2
j=1

str1[1]='a'

str[6]='a'

i=7

Memory

d i v y a n a
Iteration 3
j=2

str1[2]='n'

str[7]='n'
Iteration 4
j=3

str1[3]='d'

str[8]='d'
Iteration 5
j=4

str1[4]='i'

str[9]='i'
Iteration 6
j=5

str1[5]='n'

str[10]='n'
Iteration 7
j=6

str1[6]='i'

str[11]='i'

Memory becomes

d i v y a n a n d i n i

*/
