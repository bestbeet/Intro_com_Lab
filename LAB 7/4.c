#include<stdio.h>
#include<string.h>
struct student{
           char stdcode[11];
           char name[60];
           float gpa;
           char status[15];
};
struct student setStatus(struct student st);
void showStudent(struct student st);
int main ()
{
    struct student stds[4];   
    int i;
    
    printf("Enter new data\n");
    for(i=0;i<4;i++){
       printf("Student%d\n",i+1);
       printf("Code: "); scanf("%s",stds[i].stdcode); fflush(stdin);
       printf("Name: "); scanf("%s",stds[i].name); fflush(stdin);
       printf("GPA: "); scanf("%f",&stds[i].gpa); fflush(stdin);
    }
    printf("All students\n");
    for(i=0;i<4;i++){
       stds[i]=setStatus(stds[i]);
       showStudent(stds[i]);
    }   
    getch();
    return 0;
}
struct student setStatus(struct student st)
{
     if(st.gpa>=3.50)
        strcpy(st.status,"Excellent");
     else if(st.gpa>=2.00&&st.gpa<3.50)
        strcpy(st.status,"Pass");
     else if(st.gpa>=1.50&&st.gpa<2.00)
        strcpy(st.status,"Critical");
     else
        strcpy(st.status,"Fail");
     return st;     
}
void showStudent(struct student st)
{
     printf("%-9s %-9s %-5.2f %-2s\n",st.stdcode,st.name,st.gpa,st.status);
}

