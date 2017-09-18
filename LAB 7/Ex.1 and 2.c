#include<stdio.h>
#include<string.h>
struct student{
           char stdcode[11];
           char name[60];
           float gpa;
           char status[15];
};
void setStatus(struct student stds[], int n);
void showStudent(struct student stds[], int n);
int main ()
{
    struct student stds[5];   
    int num,i;
    
    printf("Enter number of student: "); scanf("%d",&num);
    printf("Enter new data\n");
    for(i=0;i<num;i++){
       printf("Student%d\n",i+1);
       printf("Code: "); scanf("%s",stds[i].stdcode); fflush(stdin);
       printf("Name: "); scanf("%s",stds[i].name); fflush(stdin);
       printf("GPA: "); scanf("%f",&stds[i].gpa); fflush(stdin);
    }
    printf("All students\n");
    setStatus(stds,num);
    showStudent(stds,num);
  
    getch();
    return 0;
}
void setStatus(struct student stds[], int n)
{
     int i;
     for(i=0;i<n;i++){
        if(stds[i].gpa>=3.50)
          strcpy(stds[i].status,"Excellent");
        else if(stds[i].gpa>=2.00&&stds[i].gpa<3.50)
          strcpy(stds[i].status,"Pass");
        else if(stds[i].gpa>=1.50&&stds[i].gpa<2.00)
          strcpy(stds[i].status,"Critical");
        else
          strcpy(stds[i].status,"Fail");
     };   
}
void showStudent(struct student stds[], int n)
{
     int i;
     for(i=0;i<n;i++){
     printf("%-9s %-9s %-5.2f %-2s\n",stds[i].stdcode,stds[i].name,stds[i].gpa,stds[i].status);
     };
}

