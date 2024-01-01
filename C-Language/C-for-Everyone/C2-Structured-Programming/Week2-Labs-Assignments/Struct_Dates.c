#include <stdio.h>

typedef enum month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} Month_t;

typedef struct date
{
    Month_t m;
    int d;
} SDate_t;

// This function prints the current date.

void print_date(SDate_t date)
{

    switch (date.m)

    {
    case JAN:
        printf("%s %d\n", "JAN", date.d);
        break;
    case FEB:
        printf("%s %d\n", "FEB", date.d);
        break;
    case MAR:
        printf("%s %d\n", "MAR", date.d);
        break;
    case APR:
        printf("%s %d\n", "APR", date.d);
        break;
    case MAY:
        printf("%s %d\n", "Mai", date.d);
        break;
    case JUN:
        printf("%s %d\n", "JUN", date.d);
        break;
    case JUL:
        printf("%s %d\n", "JUL", date.d);
        break;
    case AUG:
        printf("%s %d\n", "AUG", date.d);
        break;
    case SEP:
        printf("%s %d\n", "SEP", date.d);
        break;
    case OCT:
        printf("%s %d\n", "OCT", date.d);
        break;
    case NOV:
        printf("%s %d\n", "NOV", date.d);
        break;
    case DEC:
        printf("%s %d\n", "DEC", date.d);
        break;
    default:
        printf("Error");
    }
}

// This function takes a current date and prints the next date

void nextdate(SDate_t date)
{
    switch (date.m)
    {
    case JAN:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "JAN", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "FEB", 1);
        break;

    case FEB:

        if (date.d >= 1 && date.d <= 27)
            printf("%s %d\n", "FEB", date.d + 1);

        else if (date.d == 28)
            printf("%s %d\n", "MAR", 1);
        break;

    case MAR:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "MAR", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "APR", 1);
        break;

    case APR:

        if (date.d >= 1 && date.d <= 29)
            printf("%s %d\n", "APR", date.d + 1);

        else if (date.d == 30)
            printf("%s %d\n", "MAY", 1);
        break;

    case MAY:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "MAY", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "JUN", 1);
        break;

    case JUN:

        if (date.d >= 1 && date.d <= 29)
            printf("%s %d\n", "JUN", date.d + 1);

        else if (date.d == 30)
            printf("%s %d\n", "JUL", 1);
        break;

    case JUL:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "JUL", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "AUG", 1);
        break;

    case AUG:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "AUG", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "SEP", 1);
        break;

    case SEP:

        if (date.d >= 1 && date.d <= 29)
            printf("%s %d\n", "SEP", date.d + 1);

        else if (date.d == 30)
            printf("%s %d\n", "OCT", 1);
        break;

    case OCT:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "OCT", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "NOV", 1);
        break;

    case NOV:

        if (date.d >= 1 && date.d <= 29)
            printf("%s %d\n", "NOV", date.d + 1);

        else if (date.d == 30)
            printf("%s %d\n", "DEC", 1);
        break;

    case DEC:

        if (date.d >= 1 && date.d <= 30)
            printf("%s %d\n", "DEC", date.d + 1);

        else if (date.d == 31)
            printf("%s %d\n", "JAN", 1);
        break;

    default:
        printf("Error");
    }
}

int main(void)
{
    SDate_t date = {DEC, 31}; // define a struct takes DEC into month(m) and 31 into day(d)

    print_date(date); // print this date DEC 31

    nextdate(date); // print the next date JAN 1

    return 0;
}
