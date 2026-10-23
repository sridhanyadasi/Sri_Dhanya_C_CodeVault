/* Without arguments & with return type: */

/*3. Write a C program that defines a function generateNextPrime to find and return the next prime number greater than 50. */

#include<stdio.h>

int generateNextPrime();

void main()
{
    int  num ;

     num = generateNextPrime( );
}

int generateNextPrime()
{
     int prime, num ;

      printf("Enter a number :");
      scanf("%d", &num);

    while(1)
    {
        prime=1;
        num++;

    for (int i=2 ; i<=num/2 ; i++)  //num/2 istuntey ne vastundhi y?
    {
       if (num%i==0)
       {
           prime=0;
           break;
       }

    }

   if (prime)
        {
            printf("The next prime number is : %d\n", num);
            break;
        }
    }

    return num;

}



