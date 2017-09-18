#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int w;
    float h, bmi;
    
    printf("Enter your weight: ");
    scanf("%d",&w);
    printf("Enter your height (in meter): ");
    scanf("%f",&h);
    bmi = w/pow(h,2);
    if (bmi<18.5)
       printf("Underweight\n");
    else if (bmi>=18.5 && bmi<25)
       printf("Normal\n");
    else if (bmi>=25 && bmi<=30)
       printf("Overweight\n");
    else 
       printf("Obese\n");
    getch();
    return 0;
}
