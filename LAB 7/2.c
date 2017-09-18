#include<stdio.h>
#include<string.h>
int main ()
{
    struct std{
           char stdcode[11];
           char name[60];
           float gpa;
    };
    
    struct std stds[4];
    
    int i;
    
    printf("Enter new data\n");
    for(i=0;i<4;i++){
       printf("Student%d\n",i+1);
       printf("Code: "); gets(stds[i].stdcode); fflush(stdin);
       printf("Name: "); gets(stds[i].name); fflush(stdin);
       printf("GPA: "); scanf("%f",&stds[i].gpa); fflush(stdin);
    };
    printf("All students\n");
    for(i=0;i<4;i++){
       printf("%-3s %-5s %-5.2f\n",stds[i].stdcode,stds[i].name,stds[i].gpa);
    };
    
    getch();
    return 0;
}
     
