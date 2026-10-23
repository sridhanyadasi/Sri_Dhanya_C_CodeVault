/*6. Develop a C program that prompts the user to enter their birth month (1 for January, 2
for February, etc.) and birthday. Use a switch-case statement to determine and display their
zodiac sign (Aries, Taurus, Gemini, Cancer, Leo, ……….) based on their birth month.  */

#include <stdio.h>

int main() {
    int month, day;

    printf("Enter birth month (1-12): ");
    scanf("%d", &month);

    printf("Enter birth day: ");
    scanf("%d", &day);

    switch(month) {
        case 1: // January
            if(day <= 19)
                printf("Capricorn");
            else
                printf("Aquarius");
            break;

        case 2: // February
            if(day <= 18)
                printf("Aquarius");
            else
                printf("Pisces");
            break;

        case 3: // March
            if(day <= 20)
                printf("Pisces");
            else
                printf("Aries");
            break;

        case 4: // April
            if(day <= 19)
                printf("Aries");
            else
                printf("Taurus");
            break;

        case 5: // May
            if(day <= 20)
                printf("Taurus");
            else
                printf("Gemini");
            break;

        case 6: // June
            if(day <= 20)
                printf("Gemini");
            else
                printf("Cancer");
            break;

        case 7: // July
            if(day <= 22)
                printf("Cancer");
            else
                printf("Leo");
            break;

        case 8: // August
            if(day <= 22)
                printf("Leo");
            else
                printf("Virgo");
            break;

        case 9: // September
            if(day <= 22)
                printf("Virgo");
            else
                printf("Libra");
            break;

        case 10: // October
            if(day <= 22)
                printf("Libra");
            else
                printf("Scorpio");
            break;

        case 11: // November
            if(day <= 21)
                printf("Scorpio");
            else
                printf("Sagittarius");
            break;

        case 12: // December
            if(day <= 21)
                printf("Sagittarius");
            else
                printf("Capricorn");
            break;

        default:
            printf("Invalid month!");
    }

    return 0;
}
