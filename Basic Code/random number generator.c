#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{

    char x[]="qwertyuiopasdfghjklzxcvbnm[;.,]'/=-0987654321)(*&^%$#@!+_}{";
    srand(time(0));
  //  x[]=rand();
  for (int i=0;i<5;i++)
    printf("%c",x[rand()%(sizeof x-1)]);

    /*int n;
    srand(time(0));
    n=rand()%100;
    //printf("%d",n);
    char x;
    srand(time(0));
    x=rand();
    printf("%c%d",x,n);*/
}

