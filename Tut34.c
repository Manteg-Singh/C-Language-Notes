#include <stdio.h>

int main()
{
    // system("cls");
    FILE *ptr = NULL;
    char string[50] = "\nThis content was produced by Tut34.c";
    //********READING A FILE**********
    /*ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("Content of myfile.txt : %s\n",string);*/

    //********WRITING A FILE**********
   /* ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);*/

    //********WRITING A FILE IN APPEND MODE(preserves previous data)**********
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    fclose(ptr);

    return 0;
}