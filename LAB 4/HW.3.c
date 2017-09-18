#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,num,check;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++){
       check=1;
       for(j=2;j<i;j++){
          if(!(i%j))
            check=0;
          }
       if(check)
         printf("%d ",i);
       }
    getch();
    return 0;
}   
