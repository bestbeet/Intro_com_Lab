//labString1.c
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1;
    char str1[50], str2[50];
    char str3[10]={'H','e','l','l','o'};
    printf("Enter the first text : ");
    scanf("%s",str1); fflush(stdin);
    printf("Enter the second text : ");
    scanf("%s",str2); fflush(stdin);
    printf("str1=\"%s\" length=%d\n",str1,strlen(str1));
    printf("str2=\"%s\" length=%d\n",str2,strlen(str2));
    printf("str3=\"%s\" length=%d\n",str3,strlen(str3));
    getch();
    return 0;
}
