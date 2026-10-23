/*4.Write a C program that asks the user to input a series of exam scores.
 Use a while loop to keep reading scores until the user enters a negative score (e.g., -1).
  Use the break statement to exit the loop. Calculate and print the average of the scores entered before the negative score*/

  #include<stdio.h>
  int main()
  {
    int num,sum=0,i=0;

    while(1)
    {
        printf("enter your exam score :");
        scanf("%d",&num);

            if(num<=0)
        {
            break;
        }
              sum=sum+num;
              i++;

       // printf("your entered exam score will be : %d\n",num);
    }
        printf("average of the exam scores are : %d ",sum/i);

        return 0;

  }
