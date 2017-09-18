#include<stdio.h>
float average (float Score[],int N);
main ()
{
     int n,i;
     float score[100],Avg;
     printf("Enter number of students: "); 
     scanf("%d",&n);
     if(n<100)
       for(i=0;i<n;i++){
          printf("Enter score of student %d: ",i+1);
          scanf("%f",&score[i]);
          }
     Avg = average(score,n);
     printf("Average score of students is %.2f",Avg);
     getch();
}
float average (float Score[],int N)
{
      float avg,score=0;
      int i;
      for(i=0;i<N;i++){             
         score = score + Score[i];
         }
      avg = score/N;
      return avg;
}
