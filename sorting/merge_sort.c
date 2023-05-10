//merge sort
#include<stdio.h>
#define max 100
//*********************
void merge_sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
//****************************

void merge(int arr[],int lb,int mid,int ub)
{
    int temp[max];
   int i=lb;
    int j=mid+1;
    int k=lb;

    while(i<=mid&&j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++,k++;
        }
        else
        {
            temp[k]=arr[j];
            j++,k++;
        }
    }
        while(j<=ub)
        {
            temp[k]=arr[j];
            j++,k++;
        }


        while(i<=mid)
        {
            temp[k]=arr[i];
            i++,k++;
        }

    for(k=lb;k<=ub;k++)
    {
        arr[k]=temp[k];
    }
}
//****************************
void main()
{
  int arr[max],lb=0,ub;
  printf("\n\nENTER THE SIZE OF THE ARRAY:");
  scanf("%d",&ub);
  printf("\n\nENTER THE %d ELEMENTS IN THE ARRAY\n",ub) ;
  for(int i=0;i<ub;i++)
    scanf("%d",&arr[i]);

  merge_sort(arr,lb,ub-1);

  printf("\n\nTHE SORTED ARRAY \n");
  for(int i=0;i<ub;i++)
    printf("%d ",arr[i]);
}