#include <stdio.h>
int main()
{
    int num, i = 0;
    printf (" Enter a number");
    scanf (" %d", &num);
    printf ("\n Table of %d", num);
    tab(num, 1); }
void tab(int num, int i)
{
    printf ("\n %d x %d = %d ", num, i, (num * i));

    if (i < 10)
        return tab(num, i + 1);
}
