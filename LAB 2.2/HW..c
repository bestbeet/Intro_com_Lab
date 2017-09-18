#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() 
{
    int num, p;
    printf("Please enter a number (5 digits): ");
    scanf("%d",&num);
    printf("Please enter a number's position (1-5): ");
    scanf("%d",&p);
    printf("It is %d\n",(num/(int)pow(10,p-1))%10);
    getch();
    return 0;
}
    
