#include<stdio.h>
void inputMatrix(int M[3][2]);
int min(int M[3][2]);
int max(int M[3][2]);
main ()
{
     int a[3][2];
     int Min,Max;
     int i,j;
     inputMatrix(a);
     printf("Matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
           printf("%-5d ",a[i][j]);
           }
        printf("\n");
        }
     Min = min(a);
     Max = max(a);
     printf("Min = %d\n",Min);
     printf("Max = %d\n",Max);
     getch();
}
void inputMatrix(int M[3][2])
{
     int i,j;
     printf("Enter element of Matrix M 3x2\n");
     for(i=0;i<3;i++)
        for(j=0;j<2;j++){
           printf("M[%d][%d]: ",i+1,j+1); scanf("%d",&M[i][j]);
           }
}
int min(int M[3][2])
{
    int min=M[0][0],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++){
           if(M[i][j]<=min)
              min = M[i][j];
           }
    return min;  
}
int max(int M[3][2])
{
    int max=M[0][0],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++){
           if(M[i][j]>max)
              max = M[i][j];
           }
    return max;  
}
         
    

           
     
