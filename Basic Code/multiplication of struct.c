#include<stdio.h>
typedef struct vecto
{
    int x;

}vect;
struct vecto mul(struct vecto x1,struct vecto x2)
{
    struct vecto result;
    result.x=x1.x+x2.x;
    return result;
}
void main()
{
    vect x,v1,v2;
    v1.x=10;
    v2.x=3;
    x=mul(v1,v2);
    printf("%d",x);
}
