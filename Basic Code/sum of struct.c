#include<stdio.h>
struct employee
{
    int x;
    int y;

};
struct employee add(struct employee v1,struct employee v2)
{
    struct employee result;
    result.x=v1.x*v2.x;
    result.y=v1.y+v2.y;
    return result;
}
void main()
{
    struct employee v1,v2,x;
    v1.x=10;
    v1.y=11;
    v2.x=10;
    v2.y=11;
    x=add(v1,v2);
    printf("%d\n",x.x);
    printf("%d",x.y);
}
