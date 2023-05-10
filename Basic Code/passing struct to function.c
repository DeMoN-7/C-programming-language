#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];

};
void show(struct employee emp,struct employee *ptr)
{
    printf("code %d\n",emp.code);
    printf("salary %f\n",emp.salary);
    printf("name %s\n",emp.name);
    ptr->code=121;
}
void main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=101;
    strcpy(ptr->name,"Ayush");
    ptr->salary=500.2;
    show(e1,ptr);
    printf("code %d\n",e1.code);


}
