#include<stdio.h>
#include<conio.h>
int main ()
{
    int i, j, num;
    
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    
    for (i=0;i<num;i++){
        for (j=0;j<num;j++){
            if (j>=i)
               printf("*");
            else
               printf(" ");
            }
        printf("\n");
        }
    getch();
    return 0;
}
       
    
