#include<stdio.h>
main ()
{
     char sen[50];
     int str;
     int npali=0,i;
     
     printf("Enter a sentence: ");
     gets(sen);
     str=strlen(sen);
     for(i=0;i<str/2;i++){
        if(sen[i]!=sen[str-1-i])
          npali=1;
        }
     if(npali==1)
       printf("It is not Palindrome\n");
     else
       printf("It's Palindrome\n");
     getch();
}
