#include <stdio.h>
#include <conio.h>
int main ()
{
    int n, abs_n;
    float inv_n;
    printf("Enter an integer : "); 
    scanf("%d",&n);
    abs_n = n<0 ? -n : n;
    //conditional operator
    inv_n = n!=0 ? 1.0/n : 0;
    //conditional operator
    printf("|n| = %d\n", abs_n);
    printf("inverse n = %f\n", inv_n);
    getch();
    return 0;
} 
