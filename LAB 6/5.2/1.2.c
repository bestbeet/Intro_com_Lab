#include <stdio.h>
void show2(int x[],int n);
int main()
{ 
    int a[100]={3, -1, 2, 7, 8};
    int N;
    printf("Enter a number of element: ");
    scanf("%d",&N);
    show2(a,N);
    printf("\nEnd of program.\n");
    getch();
    return 0;
}
void show2(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
       printf("%d ",x[i]);
}
