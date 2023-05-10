/* array is a data structure of similar data type
 2 types of data type primitive and user defined
example of primitive is char,int,etc
example of user defined is array */


//int a[] ={12,34,56,8} // declaration of array when we don't know how many element are there in array

#include<stdio.h>
void main()
{
    int a[]={2,3,4,32,456,43,6,88,88,88} ;             //normal declaration of array
    printf("enter the element to search");
    int x,c=0;
    scanf("%d",&x);
    int d= sizeof(a)/sizeof(int);       // find the size of array
    for (int i=0;i<d;i++)           //printing elements of array
    {
        if(a[i]==x)
        {

            c++;

        }

    }
    if (c!=0)
    {
        printf("yes it is available %d times",c);
    }
}
