#include<stdio.h>
#include<string.h>
int main ()
{
    struct person{
           char id[14];
           char name[60];
           int age;
    };
    
    struct person p1,p2;
    strcpy(p1.id,"3100500511001");
    strcpy(p1.name,"Nadech Naraknaya");
    p1.age=21;
    
    printf("Enter Name: "); gets(p2.name); 
    printf("Enter ID: "); gets(p2.id);
    printf("Enter Age: "); scanf("%d",&p2.age);
    
    printf("P1\n");
    printf("ID= %s\n",p1.id);
    printf("Name= %s\n",p1.name);
    printf("Age= %d\n\n",p1.age);
    printf("P2\n");
    printf("ID= %s\n",p2.id);
    printf("Name= %s\n",p2.name);
    printf("Age= %d\n",p2.age);
    
    getch();
    return 0;
}
    
