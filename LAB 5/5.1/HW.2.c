#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    int i,max=0,min=0,num[10];
    for(i=0;i<10;i++){
       printf("Enter a number: ");
       scanf("%d",&num[i]);
       if(num[i]>max)
         max=num[i];
       else if(num[i]<min)
         min=num[i];
       }
    printf("Maximum number is %d\n",max);
    printf("Minimum number is %d\n",min);
    getch();
    return 0;
}
