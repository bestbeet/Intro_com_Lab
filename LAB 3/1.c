#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,j;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    printf("\nEnter the value of j: ");
    scanf("%d",&j);
    /* Relational Operator */
    printf("\nUsing Relational Operator\n\n");
    printf(" i<j is %d\n", i<j);
    printf(" i<=j is %d\n", i<=j);
    printf(" i==j is %d\n", i==j);
    printf(" i>j is %d\n", i>j);
    printf(" i>=j is %d\n", i>=j); 
    printf(" i!=j is %d\n\n", i!=j);
    /* Logical Operator */
    printf("\nUsing Logical Operator\n\n");
    printf("AND i&&j is %d\n", i&&j);
    printf("OR i||j is %d\n", i||j);
    printf("NEGATION !i is %d\n", !i);
    printf("NEGATION !j is %d\n\n", !j);
    system("PAUSE");
    return 0;
} 
