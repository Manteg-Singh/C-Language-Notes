#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s1[] = "Manteg";
    char s2[] = "Singh";
    char s3[54];
    //puts(strcat(s1,s2));
   // printf("The length of s1 is %d \n", strlen(s1));
   // printf("The length of s2 is %d \n", strlen(s2));
   // printf("The reversed s1 string is\n");
    //puts(strrev(s1));
    //strcpy(s3, strcat(s1, s2));
    //puts(s3);
printf("The strcmp for s1 , s2 returned %d\n",strcmp(s1,s2));

    return 0;
}