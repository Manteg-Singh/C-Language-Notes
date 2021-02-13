#include <stdio.h>

int main()
{
    int marks[4]; /*We can write array as int marks[4]={23,34,45,54};    if we ourself want to store the
     data without getting input*/

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student %d is %d\n", i, marks[i]);
    }

    return 0;
}
