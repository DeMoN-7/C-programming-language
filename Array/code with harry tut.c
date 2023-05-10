#include<stdio.h>
void main()
{

    //execution time: 0.025 s
    int i=0,i1=1,l=42,temp,q;
    scanf("%d",&q);
    //printf("%d %d ",i,i1);
    for (int j=2; j<q; j++)
    {
        temp=i;
        i=i1;
        i1=i+temp;


    }
     printf("%d ",i1);

}

