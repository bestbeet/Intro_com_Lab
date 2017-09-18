//labString3.c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char std[4][60];
    printf("Enter student first name: ");
    gets(std[0]);
    printf("Enter student last name: ");
    gets(std[1]);
    printf("Enter where student was born: ");
    gets(std[2]);
    printf("Enter student faculty: ");
    gets(std[3]);
    printf("\nReport\n");
    printf("Name: %s %s\n",std[0],std[1]);
    printf("Was born in %s\n",std[2]);
    printf("Faculty: %s\n",std[3]);
    getch();
    return 0;
}
