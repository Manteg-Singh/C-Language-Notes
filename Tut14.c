#include <stdio.h>
int sum(int a, int b)   
{                      

    return a + b;      

}

void printstar(int n)     //Function Declaration
{
    int i;
    for (i = 0; i < n; i++)     //Funciton Defination
    {
        printf("%c", '*');
    }
}

int main()
{
    /*int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d", c);*/
    printstar(5);                //Function call

    return 0;
}
