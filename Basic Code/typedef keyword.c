#include<stdio.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];

}emp;
void main()
{
    emp e1;
    emp *ptr;
    ptr=&e1;
    ptr->code=101;
    strcpy(ptr->name,"Ayush");
    ptr->salary=500.2;
    printf("code %d\n",e1.code);
    printf("code %0.2f\n",e1.salary);
    printf("code %s\n",e1.name);
}
