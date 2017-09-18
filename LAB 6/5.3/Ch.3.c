//labString3.c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char std[5][4][60];
    int i;
    
    for(i=0;i<5;i++){
       printf("Enter student %d first name: ",i+1);
       gets(std[i][0]);
       printf("last name: ");
       gets(std[i][1]);
       printf("Enter where student was born: ");
       gets(std[i][2]);
       printf("Enter when student was born: ");
       gets(std[i][3]);
       }
    printf("\nReport\n");
    for(i=0;i<5;i++){
       printf("Name: %s %s\n",std[i][0],std[i][1]);
       printf("Born in %s\n",std[i][2]);
       printf("Was born in: %s\n",std[i][3]);
       }
    getch();
    return 0;
}
