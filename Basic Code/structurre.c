#include<stdio.h>
#include<string.h>
struct employee
    {
        int code;
        float salary;
        char name[20];
    };
void main()
{
    int cod;
    float sal;
    char nam[15];
    for (int i=1;i<4;i++)
    {

    struct employee i;
    printf("enter the code\n");
    scanf("%d",&cod);
    i.code=cod;
    printf("enter the salary\n");
    scanf("%f",&sal);
    i.salary =sal;
    printf("enter the name\n");
    scanf("%s",nam);
    strcpy(i.name,nam);
    }
    for (int i=1;i<4;i++)
    {
        struct employee i;
        printf("Code:%d\n",i.code);
        printf("Salary:%f\n",i.salary);
        printf("Name:%s\n",i.name);
    }







}
