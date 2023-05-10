#include<stdio.h>
void  sum(int n)
{
    int x=0;
    if (n>0)
    {

     x=x+sum(n-1);
//     sum(n-1);
     printf("%d",x);

    }
}
void main()
{
    sum(10);

//    printf("%d",x);

}
