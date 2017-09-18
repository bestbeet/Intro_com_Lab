//labString2-2.c
#include<stdio.h>
#include<string.h>
int strSearch(char str[],char ch);
int main()
{ 
    char ch1; int n;
    char str1[50];
    printf("Enter a string : "); gets(str1);
    printf("str1=\"%s\" length=%d\n",str1,strlen(str1));
    printf("Enter a character to find: ");
    scanf("%c",&ch1); fflush(stdin);
    n=strSearch(str1,ch1);          
    printf("%c is found %d times.\n",ch1, n);
    getch();
    return 0;
}
int strSearch(char str[],char ch)
{ 
    int i,j;
    for(i=0,j=0; i<strlen(str); i++)
       if (str[i]==ch) j++;
    return j;
}
