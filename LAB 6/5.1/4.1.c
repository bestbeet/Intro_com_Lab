#include<stdio.h>
int addvalue(int a, int b);
void main(void)
{
     int x1, x2;
     printf("Enter x1 :"); scanf("%d", &x1);
     printf("Enter x2 :"); scanf("%d", &x2);
     printf("x1 + x2 = %d\n", addvalue(x1, x2));
     x1 = addvalue(5, 3);
     printf("5 + 3 = %d\n", x1);
     x1 = addvalue(-3, addvalue(5, addvalue(addvalue(12,4), -23)));
     printf("-3 + 5 + 12 + 4 -- 23 = %d\n", x1);
     system("PAUSE");
}

int addvalue(int a, int b)
{
    if (a > 32000)
       return 0;  
    if (b > 32000)
       return 0;
       return a+b;
} 
