#include<stdio.h>
#include<stdlib.h>
int main () 
{ 
    int ndays, year, month, week, day;
    printf("Input number of days : ");
    scanf("%d",&ndays);
    year = ndays/365;
    month = (ndays%365)/30;
    week = ((ndays%365)%30)/7;
    day =  ((ndays%365)%30)%7;
    printf("It is equivalent to %d years %d months ",year,month);
    printf("%d weeks and %d days.\n\n",week,day);
    system("PAUSE");
    return 0 ;
    
}
