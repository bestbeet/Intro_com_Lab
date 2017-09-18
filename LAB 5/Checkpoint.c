#include<stdio.h>
#include<conio.h>
#define MAX 3
int main ()
{
    int MatA[MAX][MAX]={}, MatB[MAX][MAX]={}, MatC[MAX][MAX]={};
    int i,j;
    int ev=0,sum=0;
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            printf("Enter a element %d,%d of matrix A: ",i,j);
            scanf("%d",&MatA[i][j]);
            }
       }
    printf("\n"); 
    
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            printf("Enter a element %d,%d of matrix B: ",i,j);
            scanf("%d",&MatB[i][j]);
            }
       }
    printf("\n");   
    
    printf("Matrix A :\n");
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            printf("%5d",MatA[i][j]);
            }
         printf("\n");
       }
    printf("\n");    
    
    printf("Matrix B :\n");
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            printf("%5d",MatB[i][j]);
            }
         printf("\n");
       }
      
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            MatC[i][j]=MatA[i][j]+MatB[i][j];
            }
         printf("\n");
       } 
    printf("\n");
    
    printf("Matrix C :\n");
    for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
            printf("%5d",MatC[i][j]);
            }
         printf("\n");
       }
     
     for(i=1;i<=MAX;i++){
       for(j=1;j<=MAX;j++){
          if(MatC[i][j]%2==0)
             ev++;
          }
       }
     
     printf("Even number in Matrix C is %d",ev);
    // printf("Summation Diagonal of C is %d",sum);
     getch();
     return 0;
}
