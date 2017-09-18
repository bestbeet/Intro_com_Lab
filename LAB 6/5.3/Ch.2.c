//labString2-2.c
#include<stdio.h>
#include<string.h>
void replaceStr(char str[],char c1, char c2);
int main()
{ 
    char C1,C2; 
    char str1[50];
    printf("Enter a string : "); gets(str1);
    printf("str1=\"%s\" length=%d\n",str1,strlen(str1));
    printf("Enter a character to find: ");
    scanf("%c",&C1); fflush(stdin);
    printf("Enter a character to replace: ");
    scanf("%c",&C2); fflush(stdin);
    replaceStr(str1,C1,C2);     
    getch();
    return 0;
}
void replaceStr(char str[],char c1, char c2)
{ 
    int i;
    for(i=0;i<strlen(str);i++)
       if (str[i]==c1)
           str[i]=c2;
    printf("str1=\"%s\" ",str);
}
