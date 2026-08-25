/*Create a program that simulates access control for a restricted area.
 Prompt the user to enter their age, whether they have a security badge, and whether they are registered in the system.
 Use logical AND (&&) and logical OR (||) operators to check if the user is either >=18 years older and with a badge or a registered user.
  Display whether access is granted or denied.  */

  #include<stdio.h>
  void main()
  {
      int age;
      int securityBadge;

      printf("enter a badge if you have security badge enter 1 or else enter 0\n");
      scanf("%d",&securityBadge);



       printf("enter a age\n");

       scanf("%d",&age);


       if(((age>=18) || (age==18)) && (securityBadge==1))
       {
           printf("eligible for vote");
       }
       else
       {
           printf("not eligible for vote");
       }


  }
