#include<stdio.h>
#include<math.h>
float volPentagonalPyramid(float t, float h);
main ()
{
     float t,h,V;
     printf("Enter side of pyramid: ");   
     scanf("%f",&t);
     printf("Enter height of pyramid: "); 
     scanf("%f",&h);
     V = volPentagonalPyramid(t,h);
     printf("Volume of pyramid is %.2f",V);
     getch();
}
float volPentagonalPyramid(float t, float h)
{
     return (t*t*(sqrt(25+(10*sqrt(5)))))/4;
}
