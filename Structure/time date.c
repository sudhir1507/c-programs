#include<stdio.h>
#include<conio.h>
#include<time.h>
struct flat
{
    struct tm tm1;
};
int main()
{
    struct flat *temp=(struct flat *)malloc(sizeof(struct flat));
    int age;
    time_t t;
    t = time(NULL);
    
    struct tm tm2=*localtime(&t); // current date
    temp->tm1.tm_mday=12;
    temp->tm1.tm_mon=3;
    temp->tm1.tm_year=2000;
    
    /////////////////////////////
    
    tm2.tm_mon+=1;
    tm2.tm_year+=1900;
    
    age=tm2.tm_year-temp->tm1.tm_year;
    printf(" Birtdh Date: %d-%d-%d", temp->tm1.tm_mday, temp->tm1.tm_mon, temp->tm1.tm_year);
    printf(" \nCurrent Date: %d-%d-%d", tm2.tm_mday, tm2.tm_mon, tm2.tm_year);
    printf("\n your age is %d",age);
    getch();
    return 0;
}
