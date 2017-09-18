//labString2-1.c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char str1[50], str2[50], str3[100];
    printf("Enter the first string : "); gets(str1);
    printf("Enter the second string: "); gets(str2);
    printf("str1=\"%s\" length=%d\n",str1,strlen(str1));
    printf("str2=\"%s\" length=%d\n",str2,strlen(str2));
    strcpy(str3,str1);
    printf("str3=\"%s\" length=%d\n",str3,strlen(str3));
    strcat(str3,str2);
    printf("str3=\"%s\" length=%d\n",str3,strlen(str3));
    getch();
    return 0;
}
