#include<stdio.h>
#include<string.h>
void Reverse (char A[]);
main ()
{
     char sen[50];
     int i;
     
     printf("Enter a sentence: ");
     gets(sen);
     Reverse(sen);
     getch();
}
void Reverse (char A[])
{
     int i;
     
     for(i=strlen(A);i>=0;i--){
        printf("%c",A[i]);
        }
}
