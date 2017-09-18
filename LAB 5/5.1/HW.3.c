#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    char c,sen[50];
    int i;
    printf("Enter a sentence\n");
    scanf("%s",sen);
    printf("Enter a character: ");
    scanf("\n%c",&c);
    for(i=0;i<strlen(sen);i++){
       if(c == sen[i])
         sen[i]= 'x';
       }
    printf("%s",sen);
    getch();
    return 0;
}   
    
