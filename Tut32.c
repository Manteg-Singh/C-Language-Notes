#include <stdio.h>
//#include"Tut28.c"       To include data of tut28 in this program
#define PI 3.14
#define SQUARE(X) X*X

int main()
{
    int r=4;
    printf("Area of circle is %f",PI*SQUARE(r));
    return 0;
}
