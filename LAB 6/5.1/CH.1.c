#include<stdio.h>
#include<math.h>
void main ()
{
       float a,b,x;
       printf("Enter a first number: ");
       scanf("%f",&a);
       printf("Enter a second number: ");
       scanf("%f",&b);
       printf("Enter a third number: ");
       scanf("%f",&x);
       printf("%.2f\n",pow(a,b));
       printf("%.2f\n",sqrt(pow(a,b)+x));
       getch();
       return 0;
}
    
