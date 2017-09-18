// part2_1.c
#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{ 
    int i,j;
    for (i=MAX;i>0;i--){
        for (j=0;j<MAX;j++){
            if (j%2 == 0)
            printf( "*");
            }
        printf("\n");
        }
    getch();
    return 0;
}
