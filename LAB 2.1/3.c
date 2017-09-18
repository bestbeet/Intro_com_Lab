#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char name[30];
    float grade;
    int sec;
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your section\n");
    scanf("%d",&sec);
    printf("Enter your GPA\n");
    scanf("%f",&grade);
    printf("Hello %s\n",name);
    printf("Your section is %d and GPA is %.2f\n\n",sec,grade);
    system("PAUSE");
    return 0;
}    
    
