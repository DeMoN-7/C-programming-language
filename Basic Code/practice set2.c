#include<stdio.h>
int adr(int a, int b, int *sum,float *avg)
{
    *sum= a+b;
    *avg=(float)*sum/2;
    //printf("%u is the address of variable a",c*10);
//    return sum,avg;

}
void main()
{
    int sum;
    float avg;
    int a=15;
    int b=20;
    int z=adr(a,b,&sum,&avg);
    printf("%d\n",sum);
    printf("%0.2f",avg);

}


//                Question 2

//#include<stdio.h>
//void adr(int a)
//{
//    printf("%u is the address of variable a",&a);
//}
//void main()
//{
//    int a=55;
//    printf("%u is the address before function call\n",&a);
////    int *p=&a;
//    adr(a);
//}













//        Question 1 of

//#include<stdio.h>
//void main()
//{
//    int a=210;
//    int *x=&a;
//    printf("%d is address of a by pointer\n",x);
//    printf("%d is address of a by & method\n",&a);
////    printf("%u is address of a by & method\n",&a);
//    printf("%d is value of a",*x);
//}
