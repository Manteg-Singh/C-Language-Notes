#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many rows do u want\n");
    scanf("%d",&n);
for (int  rows = 1; rows <=n; rows++)
{
    for (int  columns = 1; columns <=rows; columns++)
    {
        printf("*");
    }
    printf("\n");
}
  return 0;
}