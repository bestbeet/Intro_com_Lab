#include<stdio.h>
int Get_Fxy (int x,int y);
main ()
{
     int x,y,fxy;
     printf("Enter number X: ");
     scanf("%d",&x);
     printf("Enter number Y: ");
     scanf("%d",&y);
     fxy=Get_Fxy(x,y);
     printf("F(%d,%d) is %d\n",x,y,fxy);
     printf("Enter number X: ");
     scanf("%d",&x);
     printf("Enter number Y: ");
     scanf("%d",&y);
     fxy=Get_Fxy(x,y);
     printf("F(%d,%d) is %d\n",x,y,fxy);
     getch();
}
int Get_Fxy (int x,int y)
{
    if(x+y>0)
       return x+y;
    else if(x+y==0)
       return 0;
    else if(x+y<0)
       return -x+y;
}
