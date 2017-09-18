#include<stdio.h>
int main()
{ 
    int num;
    
    printf("num = "); 
    scanf("%d", &num);
    if (num%2 == 0)
    printf(" %d is even integer \n\n", num);
    else
    printf(" %d is odd integer \n\n", num);
    printf("Good Bye");
    getch();
    return 0;
} 
