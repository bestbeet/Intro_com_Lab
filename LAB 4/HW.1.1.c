//part1_1.c
#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1, j = 8;
    do {
        printf("%d %d \n",i,j );
        j -= 2;
        i++;
    }while(i<=5);
    getch();
    return 0;
}
