#include <stdio.h>
void main()
{
    int i,x,count=0,count2=1,j,el;
    int k;
    printf("enter the size");
    scanf("%d",&k);
    int n[k];                   //={2,2,2,4,5,4,5,5,5,5,2,2,2,2,2};
    for (int q=0;q<k;q++)
    {
        scanf("%d",&n[q]);
    }
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
            }

        }

    }
    printf("%d occurs %d times",el,count);


}
