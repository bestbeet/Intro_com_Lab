#include<stdio.h>
float area(float a, float b);
void main(void)
{
     float W, L;
     float A;
     printf("Enter width : "); scanf("%f", &W);
     printf("Enter lenght : "); scanf("%f", &L);
     if(W!=L)
       A = area(W, L);
     printf("Area of Rectangle Width %.2f and Length %.2f is %.3f\n",W,L,A);
     getch();
}

float area(float a, float b)
{
    return a*b;
} 
