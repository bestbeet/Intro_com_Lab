#include<stdio.h>
#include<string.h>
#define max 4
struct student{
           char stdcode[11];
           char name[60];
           float gpa;
           char status[15];
};
void setStatus(struct student stds[], int n);
void showStudent(struct student stds[], int n);
struct student maxGPA(struct student stds[]);
float avgGPA(struct student stds[]);
int countCritical(struct student stds[]);
int main ()
{
    struct student stds[max],maxstd;   
    int num,cri,i;
    float avg;
    char maxgpa;
    
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
    printf("-------------------------------------------------------------\n");
    printf("student code             name               GPA        Status\n");
    printf("-------------------------------------------------------------\n");
    showStudent(stds,num);
    printf("-------------------------------------------------------------\n");
    maxstd=maxGPA(stds);
      printf("Max GPA student is\n");
      printf("%-24s %-18s %-10.2f %s\n",maxstd.stdcode,maxstd.name,maxstd.gpa,maxstd.status);
    avg=avgGPA(stds);
      printf("Average score is %.2f\n",avg);
    cri=countCritical(stds);
      printf("Critical= %d person\n",cri);
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
     printf("%-24s %-18s %-10.2f %s\n",stds[i].stdcode,stds[i].name,stds[i].gpa,stds[i].status);
     };
}

struct student maxGPA(struct student stds[])
{
    int i;
    float maxgpa=stds[0].gpa;
    struct student maxstd=stds[0];
    for(i=0;i<max;i++){
       if(stds[i].gpa>=maxgpa)
         maxgpa=stds[i].gpa;
       if(stds[i].gpa==maxgpa)
         maxstd=stds[i];
    };
    return maxstd;
}

float avgGPA(struct student stds[ ])
{
    int i;
    float total=0,avg;
    for(i=0;i<max;i++)
       total+=stds[i].gpa;
    avg=total/max;
    return avg;
}

int countCritical(struct student stds[ ])
{
    int i,ccri=0;
    for(i=0;i<max;i++){
       if(strcmp(stds[i].status,"Critical")==0)
          ccri++;
    };
    return ccri;
}


       
    

