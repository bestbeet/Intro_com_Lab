#include<stdio.h>
void grading(int N, float score[100], char grade[100]);
main ()
{
     float score[100];
     char grade[100];
     int N,i;
     printf("Enter number of students: ");
     scanf("%d",&N);
     for(i=0;i<N;i++){
        printf("Score of student %d: ",i+1);
        scanf("%f",&score[i]);
        }
     grading(N,score,grade);
     printf("---------------------------------\n");
     printf("Grade Report   Score   Grade\n\n");
     for(i=0;i<N;i++)
        printf("Student %-8d %-6.2f  %c\n",i+1,score[i],grade[i]);
     getch();
}
void grading(int N, float score[100], char grade[100])
{
     int j;
     for(j=0;j<N;j++)
        if(score[j]<50)
          grade[j]='F';
        else if(score[j]>=50)
          grade[j]='P';
}
     
