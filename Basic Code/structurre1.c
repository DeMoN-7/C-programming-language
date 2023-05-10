#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[100];
    int classs;
    char sec;
};
void main()
{
    int r,clas;
    char n[100];
    char s[10];
    struct student dem[10];
    printf("enter the roll number of student 1 ");
    scanf("%d",&r);
    dem[0].roll=r;
    printf("enter the Name number of student 1 ");
    scanf("%s",n);
    strcpy(dem[0].name,n);
    printf("enter the class in which student 1 study ");
    scanf("%d",&clas);
    dem[0].classs=clas;
    printf("enter the section in which student 1 study ");
    scanf("%c",&s);
    dem[0].sec=s;
    printf("Roll number:%d\n",dem[0].roll);
    printf("Name:%s\n",dem[0].name);
    printf("Class: %d\n",dem[0].classs);
    printf("Section: %c\n",dem[0].sec);
}
