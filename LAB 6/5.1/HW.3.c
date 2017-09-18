#include<stdio.h>
#include<math.h>
float cylinder (float d,float h);
main ()
{
     float d,h,v;
     printf("Enter a diameter of this cylinder: ");
     scanf("%f",&d);
     printf("Enter a height of this cylinder: ");
     scanf("%f",&h);
     v=cylinder(d,h);
     printf("The volume of this cylinder is %.3f ",v);
     getch();
}
float cylinder (float a,float b)
{      
      float Pi=3.14159;
      return pow(a/2,2)*b*Pi;
}
