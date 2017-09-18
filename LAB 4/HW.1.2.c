//part1_1.c
#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1, j = 8;
     while(i<=5){
        printf("%d %d \n",i,j );
        j -= 2;
        i++;
    }
    getch();
    return 0;
}
