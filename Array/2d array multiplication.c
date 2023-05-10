/*
|10  20  30 |    | 1  2  3 |
| 1   2   3 |    | 1  2  3 |

*/
#include<stdio.h>
void main()
{
    int a[2][2]={{10,20},{15,24}};
    int b[2][2]={{1,2},{11,22}};
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
