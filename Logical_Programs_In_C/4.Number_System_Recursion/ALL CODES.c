/*// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {

    printf("BINARY  TO  DECIMAL  : \n ");
    int binary ,decimal =0, remainder =0, base=0;
    printf("Enter  a binary number : ");
    scanf("%d", &binary);
    while (binary !=0)
    {
       remainder = binary % 10;
       decimal += remainder * pow(2, base);
       binary /=10;
       base++;
    }
    printf("Binary to Decimal of a number is : %d ", decimal);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("DECIMAL  TO  BINARY : \n");
    int num,  binary[20], i=0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num !=0)
    {
        binary[i] = num % 2;
        num = num/2;
        i++;
    }

    printf("Decimal to Binary of a number is :");
    for (int j=i-1; j>=0 ; j--)
    {
    printf(" %d", binary[j]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
   int  num, count=0;
   printf("ENter a decimal number : ");
   scanf("%d", &num);
   while (num!=0)
   {
      if (num % 2 ==1)
      {
          count++;
      }
       num = num/2;
   }
       printf("Count of a 1s in binary is : %d", count);
    return 0;
}*/

/*#include<stdio.h>
int gcd(int a , int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
int main()
{
    printf("GREATEST  COMMON  DIVISOR :\n");
    int a, b;
    printf("Enter a and b values : ");
    scanf("%d%d", &a, &b);

    // while (b!=0)  // without using recursion
    // {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    printf("GCD : %d", gcd(a,b));

    return 0;
}*/

/*#include<stdio.h>

int hcf(int a , int b)
{
    while(b!=0)
    {
        int temp= b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a*b)/hcf(a,b);
}
int main()
{
    printf(" HCF  AND   LCM : \n");
    int a , b;
    printf("Enter a and b values : ");
    scanf("%d%d", &a, &b);

    printf("HIGHEST COMMON FACTOR  is : %d\n", hcf(a,b));
    printf("LEAST COMMON MULTIPLE is : %d\n", lcm(a,b));

    return 0;

}*/

/*#include<stdio.h>
int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num-1);
}
int main()
{
    printf("FACTORIAL : \n");
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial of a number is : %d", fact(num));
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("DIGIT  COUNT : \n");
    int num, count=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num!=0)
    {
        num/=10;
        count++;
    }
    printf("Count of a digit is : %d", count);
    return 0;
}*/

/*#include<stdio.h>
int powerOfNumber(int power , int base)
{
    int result =1;
    for (int i=1; i<=power; i++)
    {
        result*=base;
    }
    return result;
}
int main()
{
    int power , base, result =1;
    printf("Enter power and base of a number :");
    scanf("%d%d", &base , &power);
    printf("Power of a number is : %d", powerOfNumber(power, base));
    return 0;
}*/

#include<stdio.h>
#include<string.h>
int reverseString(char str[], char reverse[], int length)
{
    length = strlen(str);
    for (int i=0; i<=length; i++)
    {
        reverse[i] = str [length - i - 1];
    }
    return reverse;
}

int main()
{
    char str[30];
    char reverse[30];
    int length;
    printf("Enter a string : ");
    scanf("%s", str);

    printf("Reverse of a string is : %s", reverseString(str , reverse , length));
    return 0;
}


