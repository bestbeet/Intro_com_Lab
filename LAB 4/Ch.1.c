#include<stdio.h>
#include<conio.h>
int main ()
{
    int i, nr, num=7;
    
    printf("Enter a number of round: ");
    scanf("%d",&nr);
    
    for(i=1;i<=nr;i++){
        printf("%d %d\n",i ,num);
        num=7*(i+1);
    }
    getch();
    return 0;
}

