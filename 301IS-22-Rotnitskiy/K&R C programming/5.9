#include <stdio.h>

/*
daytab - массив
day_of_year(int year, int month, int day) - вычисление дня года
month_day(int year, int yearday, int *pmonth, int *pday) -
вычисление месяца и даты по дню года
*/

static unsigned char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int year, int month, int day)
{
    int i, leap;

    
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    unsigned char *ptr = &daytab[leap][1]; // непосредмтвенное число дней в месяце
    
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > daytab[leap][month]) {
        printf("Enter correct input data in day_of_year\n");
        return -1;
    }

    for (i = 1; i < month; i++) 
        day += *ptr++;
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    unsigned char *ptr = &daytab[leap][1];
    
    if (year < 1 || yearday < 1 || yearday > (leap ? 366 : 365)) {
        printf("Enter correct input data in month_day\n");
        *pmonth = -1;
        *pday = -1;
        return; 
    }

    for (i = 1; *ptr < yearday ; ++i)
        yearday -= *ptr++;

    *pmonth = i;
    *pday = yearday; 
}

int main(void)
{ 
    int day = day_of_year(2005, 12, 20);
    printf("%d\n", day);
    int month, date;
    month_day(2005, day, &month, &date);
    printf("Month: %d, Day: %d\n", month, date);
    return 0;
}
