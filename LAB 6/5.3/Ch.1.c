#include<stdio.h>
int main ()
{
    char str1[50],str2[50];
    int cmp;
    printf("Enter first string: "); 
    gets(str1); fflush(stdin);
    printf("Enter second string: ");
    gets(str2); fflush(stdin); 
    cmp = strcmp(str1,str2);
    if(cmp==-1)
      printf(" %s comes before %s ",str1,str2);
    else if (cmp==1)
      printf(" %s comes after %s ",str1,str2);
    getch();
    return 0;
}
    
    
