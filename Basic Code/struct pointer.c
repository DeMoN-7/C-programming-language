#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];

};
void main()
{
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
//  (*ptr).code=101;
    ptr->code=102;
    printf("%d\n",e1.code);

}
