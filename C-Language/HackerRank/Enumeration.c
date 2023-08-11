#include <stdio.h>
typedef enum month{ jan = 1, feb, mar, apr, may, jun, 
jul, aug, sep, oct, nov, dec} month;

typedef struct date{ month m; int d;} date;

void nextdate(date d2)
{
   switch (d2.m)
    {
        case jan: 
        if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Jan", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Feb",1); break; 

        case feb: 
        if (d2.d >= 1 && d2.d <=27)
            printf("%s %d\n", "Feb", d2.d + 1); 
        else if (d2.d == 28)
            printf("%s %d\n","Mar",1); break; 

        case mar: 
        if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Mar", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Apr",1); break; 

        case apr: 
        if (d2.d >= 1 && d2.d <=29)
            printf("%s %d\n", "Apr", d2.d + 1); 
        else if (d2.d == 30)
            printf("%s %d\n","May",1); break;

        case may: 
       if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "May", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Jun",1); break;

        case jun:
         if (d2.d >= 1 && d2.d <=29)
            printf("%s %d\n", "Jun", d2.d + 1); 
        else if (d2.d == 30)
            printf("%s %d\n","Jul",1); break; 

        case jul: 
        if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Jul", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Aug",1); break; 

        case aug: 
        if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Aug", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Sep",1); break; 

        case sep: 
        if (d2.d >= 1 && d2.d <=29)
            printf("%s %d\n", "Sep", d2.d + 1); 
        else if (d2.d == 30)
            printf("%s %d\n","Oct",1); break; 

        case oct:
       if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Oct", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Nov",1); break; 

        case nov: 
        if (d2.d >= 1 && d2.d <=29)
            printf("%s %d\n", "Nov", d2.d + 1); 
        else if (d2.d == 30)
            printf("%s %d\n","Dec",1); break; 

        case dec:
        if (d2.d >= 1 && d2.d <=30)
            printf("%s %d\n", "Dec", d2.d + 1); 
        else if (d2.d == 31)
            printf("%s %d\n","Jan",1); break; 
        default : printf("Error");
    } 
}
void print_date (date d1)
{
    switch (d1.m)
    {
        case jan: printf("%s %d\n", "Jan", d1.d); break;
        case feb: printf("%s %d\n", "Feb", d1.d); break;
        case mar: printf("%s %d\n", "Mar", d1.d); break;
        case apr: printf("%s %d\n", "Apr", d1.d); break;
        case may: printf("%s %d\n", "Mai", d1.d); break;
        case jun: printf("%s %d\n", "Jun", d1.d); break;
        case jul: printf("%s %d\n", "Jul", d1.d); break;
        case aug: printf("%s %d\n", "Aug", d1.d); break;
        case sep: printf("%s %d\n", "Sep", d1.d); break;
        case oct: printf("%s %d\n", "Oct", d1.d); break;
        case nov: printf("%s %d\n", "Nov", d1.d); break;
        case dec: printf("%s %d\n", "Dec", d1.d); break; 
        default : printf("Error");
    }
}

int main(void)
{
    date d = {dec, 31};
    print_date (d);
    nextdate (d);
    return 0;
}