//Grade Report
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char course1[] = "Physics I";
    int credit1=3, sec1=3;
    char course2[] = "Math I";
    int credit2=3, sec2=12;
    char course3[] = "Chemistry";
    int credit3=3, sec3=5;
    char course4[] = "Intro to Computer Prog";
    int credit4=3, sec4=8;
    char course5[] = "Table Tennis";
    int credit5=1, sec5=4;
    char grade1, grade2, grade3, grade4, grade5;
    float gpa=0.0, totalcredits=1.0;
    int a=0;
    printf("Enter grade(A-E) for each course\n");
    printf("%s\n",course1);
    scanf("\n%c",&grade1);
    printf("%s\n",course2);
    scanf("\n%c",&grade2);
    printf("%s\n",course3);
    scanf("\n%c",&grade3);
    printf("%s\n",course4);
    scanf("\n%c",&grade4);
    printf("%s\n",course5);
    scanf("\n%c",&grade5);
    printf("\n\n GRADE REPORT \n");
    printf("---------------------------------------------------------\n");
    printf("# Course                Section     Credit     Grade\n");
    printf("---------------------------------------------------------\n");
    printf("1 %-25s %-10.2d %-10d %-10c\n",course1,sec1,credit1,grade1);    
    printf("2 %-25s %-10.2d %-10d %-10c\n",course2,sec2,credit2,grade2);   
    printf("3 %-25s %-10.2d %-10d %-10c\n",course3,sec3,credit3,grade3);   
    printf("4 %-25s %-10.2d %-10d %-10c\n",course4,sec4,credit4,grade4);   
    printf("5 %-25s %-10.2d %-10d %-10c\n",course5,sec5,credit5,grade5);   
    printf("-------------------------------------------------------\n\n");
    totalcredits = credit1+credit2+credit3+credit4+credit5;

    gpa = ( credit1*('E'-grade1)+credit2*('E'-grade2)+credit3*('E'-grade3)+
            credit4*('E'-grade4)+credit5*('E'-grade5) )/totalcredits;

    printf("\n GPA = %f\n",gpa);
    printf("-------------------------------------------------------\n\n");
    system("PAUSE");
    return 0;
}
