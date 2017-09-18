#include<stdio.h>
#include<string.h>
main ()
{
     char sen[50];
     int vow=0,con=0;
     int i;
     
     printf("Enter a sentence or vocabulary: ");
     gets(sen);
     for(i=0;i<strlen(sen);i++){
        switch(sen[i]){
              case 'a':
              case 'A':
              case 'e':
              case 'E':
              case 'i':
              case 'I':
              case '0':
              case 'O':
              case 'u':
              case 'U': vow++; break;
              default:  con++;
              }
        }       
              
     printf("Your sentence is %s\n",sen);
     printf("In this sentence have %d vowel ",vow);
     printf("and %d consonant\n",con);
     getch();
}
