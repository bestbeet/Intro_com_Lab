#include<stdio.h>
#include<string.h>
struct student{
           char stdcode[11];
           char name[60];
           float gpa;
};

void showStudent(struct student st);
int main ()
{
    struct student stds[2];   
    int i;
    
    printf("Enter new data\n");
    for(i=0;i<2;i++){
       printf("Student%d\n",i+1);
       printf("Code: "); gets(stds[i].stdcode); fflush(stdin);
       printf("Name: "); gets(stds[i].name); fflush(stdin);
       printf("GPA: "); scanf("%f",&stds[i].gpa); fflush(stdin);
    };
    printf("All students\n");
    for(i=0;i<2;i++){
       showStudent(stds[i]);
    };
    
    getch();
    return 0;
}
void showStudent(struct student st)
{
     printf("%-9s %-9s %-5.2f\n",st.stdcode,st.name,st.gpa);
}
