//part1_2.c
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("\nEnter a positive integer: ");
    scanf("%d",&num);
    do {
       printf("%d\n",num);
       num /= 10;
    }while (num>1);
    getch ();
    return 0;
} 
