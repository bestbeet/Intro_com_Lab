#include<stdio.h>
int F(int);
int main()
{ 
    int y = F(5);
    printf("F(5)= y = %d \n",y);
    getch();
    return 0;
}
int F(int x)
{
    if(x>=2)
      return x+2*F(x-1);
    else
      return 1;
}
