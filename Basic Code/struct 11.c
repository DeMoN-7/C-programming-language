#include<stdio.h>
#include<string.h>
typedef struct bank
{
    int acc;
    char name[100];
}ban;
void main()
{
//    char x[100];
    dem:
    ban hol;
    gets(hol.name);
    scanf("%d",&hol.acc);
//    strcpy(hol.name,x);
    med:
        printf("%s",hol.name);
        printf("%d",hol.acc);
    int n;
    scanf("%d",&n);
    if (n==1)
    {
        goto dem;
    }
    else
    {
        goto med;
    }

}
