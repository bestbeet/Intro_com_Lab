//labarrayex2_1.c
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char character;
    int index=0;
    char string[20];
    printf("Enter the character to find: ");
    scanf("%c",&character);
    printf("Enter the sentence: ");
    scanf("%s",&string);
    while(string[index] != '\0'){
         if(string[index] == character)
           string[index] = 'x';
         else
           index++;
         }
    printf("Show the result: %s\n",string);
    getch();
    return 0;
}
