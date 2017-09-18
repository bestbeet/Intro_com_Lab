//labString3.c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char std[3][60]; 
    printf("Enter student’s first name: ");
    gets(std[0]);
    printf("Enter student’s last name: ");
    gets(std[1]);
    printf("Enter student’s faculty: ");
    gets(std[2]);
    printf("\nReport\n");
    printf("Name: %s %s\n",std[0],std[1]);
    printf("Faculty: %s\n",std[2]);
    getch();
    return 0;
}
