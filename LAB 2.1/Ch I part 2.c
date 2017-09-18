#include<stdio.h>
#include<stdlib.h>
int main () 
{ 
    int ndays, week, day;
    printf("Input number of days : ");
    scanf("%d",&ndays);
    week = ndays/7;
    day = ndays%7;
    printf("It is equivalent to %d weeks and ",week);
    printf(" %d days.\n\n",day);
    system("PAUSE");
    return 0 ;
    
}
