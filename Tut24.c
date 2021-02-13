#include <stdio.h>
void printstr(char string[]);
void printstr(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }
}
int main()
{
   // char str[] = {'M', 'a', 'n', 't', 'e', 'g', '\0'};//or can be written as char str[]="Manteg";
   char str[34];
   gets(str);
   printf("Using custom function : \n");
    printstr(str);
    printf("\nUsing printf function : \n");
    printf("%s\n",str);
    printf("Using puts : \n");
    puts(str);



    return 0;
}