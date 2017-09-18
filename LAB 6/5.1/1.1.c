#include<stdio.h>
void get_Fx(int x);
void main()
{
     int first, second;
     printf("\n F(x) = 3x + 10 if X>0\n");
     printf("F(x) = 10 if X < 0 or X = 0");
     printf("\n\nEnter first value: ");
     scanf("%d", &first);
     get_Fx(first);
     printf("\n\nEnter second value: ");
     scanf("%d", &second);
     get_Fx(second);
     system("PAUSE");
}

void get_Fx(int x)
{
     if (x>0)
        printf("F(%d) is %d\n", x, (3*x) + 10);
     else
        printf("F(%d) is 10\n", x);
} 
