#include<stdio.h>
int Get_Fx (int x);
main ()
{
    int x,fx;
    printf("Enter X: ");
    scanf("%d",&x);
    fx=Get_Fx(x);
    printf("F(%d) is %d\n",x,fx);
    printf("Enter X: ");
    scanf("%d",&x);
    fx=Get_Fx(x);
    printf("F(%d) is %d\n",x,fx);
    printf("Enter X: ");
    scanf("%d",&x);
    fx=Get_Fx(x);
    printf("F(%d) is %d\n",x,fx);
    getch();
}
int Get_Fx (int x)
{
    if(x<0)
      return x*x+2*x+3;
    else if(x==0)
      return 0;
    else if(x>0)
      return x-2;
}
