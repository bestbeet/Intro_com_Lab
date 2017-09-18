//part1_1.c
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j = 8;
    for (i = 1; i <=5; i++){
        printf("%d %d \n",i,j );
        j -= 2;
    }
    getch();
    return 0;
}
