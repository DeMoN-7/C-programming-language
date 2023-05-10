#include <stdio.h>
void main()
{
    int i,count=0,count2=1,j,el,limit,k;

    int n[10]={1,2,2,3,4,2,3,2,3,2};
    int size=sizeof(n)/sizeof(int);

    for (i=0;i<size;i++)
    {
        for(j=i-1;j<i;j++)
        if (n[j]==n[i])
        {
            count++;
            if (count>count2)
            {
                el=n[j];
                printf("%d",el);
            }

        }

    }
    printf("%d occurs %d times",el,count);


}
