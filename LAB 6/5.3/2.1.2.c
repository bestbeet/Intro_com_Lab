//labString2-1.c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char str1[50], str2[50], str3[100];
    printf("Enter the first string : "); 
    gets(str1);
    printf("Enter the second string: "); 
    gets(str2);
    printf("str1=\"%s\"\n",str1);
    printf("str2=\"%s\"\n",str2);
    strcpy(str3,str2);
    printf("str3=\"%s and %s\"\n",str3,str1);    
    getch();
    return 0;
}
