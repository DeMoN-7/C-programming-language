//#include<stdio.h>
//void main()
//{
//    int a[5]={10,2,3,4,5};
//    int *p=&a;
//    printf("%d,",*p++);
//    printf("%d,",*p++);
//    printf("%d,",*p++);
//    printf("%d",*p++);
//}
#include<stdio.h>
void pr(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}
void main()
{
    int a[5]={1,2212,13,433,5};
    pr(a,5);

}
