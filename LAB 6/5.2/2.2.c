#include <stdio.h>
void square(int x[5]);
int main()
{ 
    int i;
    int a[5]={3, -1, 0, -7, -8};
    printf("Show all elements of array\n");
    for( i=0; i<5; i++) printf("%d ", a[i]);
    square(a);
    printf("\nAfter calling function absolute\n");
    for( i=0; i<5; i++) printf("%d ", a[i]);
    getch();
    return 0;
}
void square(int x[5])
{ 
     int j;
     for(j=0; j<5; j++)
        x[j] = x[j]*x[j];
}
