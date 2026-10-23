
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    int b=7;

    switch(a)
    {
        case 5:
        printf("five\n");

        //break;

        case 2:
        printf("Two\n");
      //  break;

        default:
        printf("Invalid outer\n");
       // break;

        switch(b)
        {
            case 7:
            printf("seven\n");
            break;

            default:
            printf("Invalid inner");
            break;
         }

    }

    return 0;
}

