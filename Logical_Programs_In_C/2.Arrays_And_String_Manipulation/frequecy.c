#include<stdio.h>
int main()
{
    int n;
    int i;
    int isPrime=1;

    printf("enter a number:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf(" enter only positive number:");

    }
    else if(n==1)
    {
        printf("it is not a prime");
    }
    else
    {
     for(i=2;i<n;i++)
        {
          if(n%i==0) {
        isPrime=0;
        break;
          }

        }
         if(isPrime==1)
    {
        printf("it is pime");
    }
    else
    {
        printf("it is not a prime");
    }
    }


}
