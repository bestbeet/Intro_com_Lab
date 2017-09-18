//labArray2Dex15.c
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int i, j, scores[3][5] = { {84, 71, 96, 65, 79},
                               {90, 55, 83, 68, 96},
                               {61, 77, 82, 94, 59}};
    float sum;
    for (i=0; i<3; i++){ 
        for (j=0, sum=0.0; j<5; j++)
            sum = sum+scores[i][j];
        printf("Sum of row %d = %.2f \n",i+1, sum);
        }
    getch();
    return 0;
}
