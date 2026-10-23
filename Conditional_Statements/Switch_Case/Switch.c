#include<stdio.h>

void main()
{
    int category;
    printf("Select Category : \n");
    printf("1.Non-veg  2.Veg:  \n");
    scanf("%d" , &category);

    int item;

    switch(category)
    {
    case 1:
        printf("Non-Veg Items : \n");
        printf("Enter items : \n");
        printf("1.Chicken Biryani  2.Mutton Biryani 3.Fish Fry  \n");

        scanf("%d" , &item);

        switch(item)
        {
        case 1:
            printf("You selected Chicken Biryani\n");
           // break;
        case 2:
            printf("You selected Mutton Biryani\n");
            break;
        case 3:
            printf("You selected Fish Fry\n");
            break;
        default:
            printf("Invalid non-veg item\n");
        }
        break;
    case 2:
        printf("Veg Items : \n");
        printf("Enter items : \n");
        printf("1.Mushroom Biryani  2.Babycorn Biryani 3.Potato Fry  \n");

        scanf("%d" , &item);

        switch(item)
        {
        case 1:
            printf("You selected Mashroom Biryani\n");
            break;
        case 2:
            printf("You selected Babycorn Biryani\n");
            break;
        case 3:
            printf("You selected Potato Fry\n");
            break;
        default:
            printf("Invalid veg item\n");
        }
        break;
     default:
            printf("Invalid selection category");
    }

}
