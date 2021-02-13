#include <stdio.h>
void changevalue(int *address );
void changevalue(int *address)
{
    *address=345;
}
int main()
{
    int a=34;
    printf("Value of a is %d\n",a);
    changevalue(&a);
    printf("Value of a now is %d\n",a);
    return 0;
}