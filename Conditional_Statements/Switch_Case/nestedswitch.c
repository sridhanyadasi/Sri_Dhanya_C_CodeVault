
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    switch(a)
    {
        case 5:
        printf("five\n");
        break;
        case 2:
        printf("Two\n");
        break;

        switch(a+2)
        {
            case 7:
            printf("seven\n");
        }
        default:
        printf("Invalid");

    }

    return 0;
}
