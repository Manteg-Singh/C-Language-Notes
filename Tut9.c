#include <stdio.h>

int main()
{
    int i, j; //or i can use int i=0,j=0; [then I can remove expression 1 in for loop]

    printf("Hello World\n");
    for (i = 0, j = 0; i < 5, j < 3; i++, j++) //2nd exp will follow until last condition of exp2 becomes false
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
