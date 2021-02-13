#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}std;

int main()
{
    //typedef <previou_name> <alias_name>;
    //typedef unsigned long ul;
    /*std s1,s2;
    s1.id=56;
    s2.id=89;
    printf("Id of s1 is %d\n",s1.id);
    printf("Id of s2 is %d\n",s2.id);*/
   // ul l1;//now it wont give error we can write ul instead of writing unsigned long


  // int *a,b;
   typedef int* intpointer;
   intpointer a,b;
   int c=89;
   a=&c;
   b=&c;










    return 0;
}