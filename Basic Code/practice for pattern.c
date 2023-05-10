#include <stdio.h>
void main()
{
    int i,j,k=0;
    int x=65,a=0;
    for(int i = 0;i<5;i++)
    {
        for(int j = 5;j>0;j--)
        {
            if(j<=k)
            {
                printf("%c",x);


            }
            else
                printf(" ");

        }
        printf("\n");
        k++;


    }
}
