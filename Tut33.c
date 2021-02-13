#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("Todays date is %s\n",__DATE__);
    printf("Time is %s\n",__TIME__);
    printf("Line is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);

    return 0;
}