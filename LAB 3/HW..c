#include<stdio.h>
#include<conio.h>
int main ()
{
    int ts, sc;
    
    printf("Enter a total Sales: ");
    scanf("%d",&ts);
    if (ts<1000)
       sc = 0.05*ts;
    else if (ts>=1000 && ts<=5000)
       sc = 0.07*ts;
    else
       sc = 0.1*ts;
    printf("Sales commission is %d\n",sc);
    getch();
    return 0;
}
