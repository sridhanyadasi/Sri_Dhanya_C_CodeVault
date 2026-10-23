/*
#include<stdio.h>
void main()
{
    int i=1;
    for(;i<=10;i++)
        printf("%d\n",i);
    while(i<=20)

        i++;
    printf("%d\n",i);

    printf("sri");
}
*/

/*
#include <stdio.h>
int main() {
 int a = 1, b = 0;
 printf("Logical AND: %d\n", a && b);       //0  (false )
 printf("Logical OR: %d\n", a || b);        //1  (true)
 printf("Logical NOT for a: %d\n", !a);     //0
 printf("Logical NOT for a: %d\n", a!=b);   //1

 return 0;
}
*/

/*
#include<stdio.h>
void main()
{
    int x=5;

                                             //because of semi colon else block not exist
                                            //   if we remove semicolon then else block will exist.
    if (x>0)                                         // otherwise it didn't treated as if block is there
    {
        printf("x is positive\n");
    }
    else;

        printf("x is negative \n");

    if (x<0)
     {
          printf("x is positive\n");
          printf("x is negative\n");


     }
    else
    {
        printf("x is positive\n");
    }

}
*/



#include<stdio.h>
  void main()
  {
    int num,count=0;
    float sum=0;

    while(num!=-1)
    {
        printf("enter your exam score :");
        scanf("%d",&num);

        if(num<=0)
        {
            break;
        }
        sum=sum+num;
        num/=10;
        count++;

       // printf("your entered exam score will be : %d\n",num);
    }
    printf("average of score will be :%f\n",sum/count);

  }


/*
#include<stdio.h>
void main()
{
    int sum=0,i=1,n;

    while(i<=n)
    {
        printf("enter a number :");
        scanf("%d",&n);

        sum=sum+n;
        i++;
    // printf("your entered numbers are : %d\n",n);
    }
    printf("average of the numbers are : %d",sum/n);
}
*/
