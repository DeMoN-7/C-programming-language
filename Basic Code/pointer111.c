#include<stdio.h>
void pr(int *p,int n)
{
    if (n>0)
    {
        printf(" %d ",*p);
        p=p+2;
        pr(p,n-2);
    }
}
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
//    int *ptr=&a;
//    printf("%d\n",*ptr);
//    printf("%u",&a);
    pr(a,n);

}
