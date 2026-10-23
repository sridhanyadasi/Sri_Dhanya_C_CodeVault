#include<stdio.h>
void main()
{
    int foodCategory , items;
    printf("Enter the foodCategory : \n");
    printf("1.Non-veg  2.Veg  3.Salad 4.Invalid\n");
    scanf("%d" , &foodCategory);

    switch(foodCategory)
    {
    case 1:
        printf("Non-veg\n");
        printf("1.Chicken Biryani 2.prawns Biryani 3.Fish fry 4.Not available\n");
        scanf("%d" , &items);
        switch(items)
        {
        case 1:
            printf("You selected Chicken Biryani");
            break;
        case 2:
            printf("You selected Prawns Biryani");
            break;
        case 3:
            printf("You selected Fish Fry");
            break;
        default:
            printf("Not available");
        }
    break;
    case 2:
        printf("Veg\n");
        printf("1.Mushroom Biryani 2.Panner Biryani 3.Cool drinks 4.Not available\n");
        scanf("%d" , &items);
        switch(items)
        {
        case 1:
            printf("You selected Mushroom Biryani");
            break;
        case 2:
            printf("You selected panner Biryani");
            break;
        case 3:
            printf("You selected Cool drinks");
            break;
        default:
            printf("Not available");
        }
    break;
    default:
            printf("Sorry, your ordered food is not available .So , Please visit again");
    }
}
