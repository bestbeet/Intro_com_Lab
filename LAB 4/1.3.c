//part1_3.c
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("\nEnter a positive integer: ");
    scanf("%d",&num);
    while (num>1) {
          printf("%d\n",num);
          num /= 10;
    }
    getch();
    return 0;
} 
