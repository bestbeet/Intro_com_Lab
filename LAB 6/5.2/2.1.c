#include <stdio.h>
void absolute(int x[5]);
int main()
{ 
    int i;
    int a[5]={3, -1, 0, -7, -8};
    printf("Show all elements of array\n");
    for( i=0; i<5; i++) printf("%d ", a[i]);
    absolute(a);
    printf("\nAfter calling function absolute\n");
    for( i=0; i<5; i++) printf("%d ", a[i]);
    getch();
    return 0;
}
void absolute(int x[5])
{ 
     int j;
     for(j=0; j<5; j++)
        if (x[j]<0) 
           x[j] = -1*x[j];
}
