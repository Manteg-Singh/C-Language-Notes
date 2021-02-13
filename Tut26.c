#include <stdio.h>
#include <string.h>
#include <math.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};

int main()
{
    struct student manteg, ravi, ramu;
    manteg.id = 1;
    ravi.id = 2;
    ramu.id = 3;
    manteg.marks = 466;
    ravi.marks = 466;
    ramu.marks = 466;
    manteg.fav_char = 'p';
    ravi.fav_char = 'p';
    ramu.fav_char = 'p';
    strcpy(manteg.name,"Nazz");
    printf("Manteg got %d marks\n",manteg.marks);
    printf("Manteg's nickname is %s\n",manteg.name);


    return 0;
}