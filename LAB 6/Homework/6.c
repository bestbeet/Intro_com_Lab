#include<stdio.h>
void doSomething(int [],int);
int main()
{ 
    int i,a[5]={2,8,9,4};
    doSomething(a,5);
    for (i=0;i<5;i++)
        printf("a%d=%d\n",i,a[i]);
    getch();
    return 0;
}
void doSomething(int x[],int n)
{  
     int j=0, r=x[0];
     while (j<=n-2){ 
           x[j]= x[j+1];  
           j++;}
     x[j]=r;
}
