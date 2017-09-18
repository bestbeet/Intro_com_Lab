#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,num,total=0;
    
    printf("Which number do you want to display: ");
    scanf("%d",&num);
    
    for(i=1;i<=5;i++){
       total=num*i;
       if(total<=60)
         printf("%d %d\n",i,total);
    }
    
    getch();
    return 0;
}
    
