#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num==0)
       printf("%d is zero\n",num);
    else if (num>0 && (num%2==0))
       printf("%d is positive even number\n",num);
    else if (num>0 && (num%2!=0))
       printf("%d is positive odd number\n",num);
    else if (num<0 && (num%2==0))
       printf("%d is negative even number\n",num);   
    else
       printf("%d is negative odd number\n",num);
    printf("Bye ...\n\n");
    system("PAUSE");
    return 0;
}  

