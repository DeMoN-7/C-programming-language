#include<stdio.h>
int main()
{
    int size;
    printf("enter size of arr : ");
    scanf("%d",&size);
    int arr[100],count = 0,count2 = 0,ele;
    printf("enter elements of arr:\n");
    for(int i = 0;i<size;i++)
        scanf("%d",&arr[i]);
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                count ++;


            }
        }
        if(count>count2)
        {
            count2 = count;
            ele = arr[i];

        }
        count = 0;
    }
    printf("%d occurs %d times",ele,count2);
}
