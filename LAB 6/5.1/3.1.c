#include<stdio.h>
void yfunc(void);
void main()
{
     printf("Hello, from main()\n");
     yfunc();
     printf("Hello, after calling myfunc()\n");
     system("PAUSE");
}

void yfunc()
{
printf("Hello, from myfunc()\n");
} 
