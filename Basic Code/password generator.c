#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    printf("._._._.._._._.Password Generator By Ayush._._._.._._._.\n");
    int a,c;
    printf("enter the size of password");
    scanf("%d",&a);
    printf("press 1 for numeric password\n");
    printf("press 2 for alphabet password\n");
    printf("press 3 for alphanumeric password\n");
    printf("press 4 for mix password\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    {
        char ar1[]="1234567890";
        srand(time(0));
        for (int i=0; i<a; i++)
            printf("%c",ar1[rand()%(sizeof ar1-1)]);
        break;
    }
    case 2:
    {
        char ar1[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
        srand(time(0));
        for (int i=0; i<a; i++)
            printf("%c",ar1[rand()%(sizeof ar1-1)]);
        break;
    }
    case 3:
    {
        char ar1[]="1234567890qwertyui1234567890opasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
        srand(time(0));
        for (int i=0; i<a; i++)
            printf("%c",ar1[rand()%(sizeof ar1-1)]);
        break;
    }

    case 4:
    {

        char ar1[]="qwertyuiopasdfghjklzxcvbnm[;.,]'/=-0987654321)(*&^%$#@!+_}{QWERTYUIOPASDFGHJKLZXCVBNM";
        srand(time(0));
        for (int i=0; i<a; i++)
            printf("%c",ar1[rand()%(sizeof ar1-1)]);
        break;
    }
    }

}
