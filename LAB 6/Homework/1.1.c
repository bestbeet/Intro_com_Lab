#include<stdio.h>
float volSquarePyramid(float s, float h);
main ()
{
     float s,h,V;
     printf("Enter side of pyramid: ");   
     scanf("%f",&s);
     printf("Enter height of pyramid: "); 
     scanf("%f",&h);
     V = volSquarePyramid(s,h);
     printf("Volume of pyramid is %.2f",V);
     getch();
}
float volSquarePyramid(float s, float h)
{
     return (s*s*h)/3;
}
