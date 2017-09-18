#include <stdio.h>
#include <conio.h>
int main ()
{
    int n, abs_n;
    float inv_n;
    printf("Enter an integer : "); 
    scanf("%d",&n);
    if(abs_n = n<0)
       abs_n = -n;
    else
       abs_n = n;
    if(inv_n = n!=0)
       inv_n = 1.0/n;
    else
       inv_n = 0;
    printf("|n| = %d\n", abs_n);
    printf("inverse n = %f\n", inv_n);
    getch();
    return 0;
} 
