//labArray2Dex15.c
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int i, j, scores[3][5];
    float sum,total=0.0;
    
    for(i=0;i<3;i++){
       printf("Enter a number in row %d \n",i+1);
       for(j=0;j<5;j++)
          scanf("%d",&scores[i][j]);
       }
    
    for (i=0;i<3;i++){ 
        for (j=0,sum=0.0;j<5;j++)
            sum = sum+scores[i][j];
        printf("Sum of row %d = %.2f \n",i+1, sum);
        total = total+sum;
        }
    printf("The Average of number is %.2f \n",total/3);
    getch();
    return 0;
}
