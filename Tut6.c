#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else if (age >= 10)
    {
        printf("You are a teeneger and you can vote for kids");
    }

    else
    {
        printf("You cannot vote!");
    }

    return 0;
}