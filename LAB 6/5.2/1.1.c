#include <stdio.h>
void show1(int x);
int main()
{ 
    int i;
    int a[5]={3, -1, 2, 7, 8};
    printf("Show all elements of array\n");
    for( i=0; i<5; i++)
       show1(a[i]);
    printf("\nEnd of program.\n");
    getch();
    return 0;
}
void show1(int x)
{
    printf(" %d ", x);
}
