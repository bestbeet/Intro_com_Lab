#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    int i,sum=0,score[10];
    for(i=0;i<10;i++){
        printf("Enter your score: ");
        scanf("%d",&score[i]);
        sum = sum + score[i];
        }
    printf("Total score is %d\n",sum);
    getch();
    return 0;
}
