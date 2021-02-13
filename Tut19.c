#include <stdio.h>

int main()
{ 
    printf("Learning about pointers\n");
    int a=76;
    int *ptra=&a;
    int *ptra2=NULL;
    printf("Address of pointer to a is %p\n",&ptra);
    printf("Address of a is %p\n",&a/*or we can print ptra*/);
    printf("value of a is %d\n",*ptra);
    printf("garbage value of ptra2  is %p\n",ptra2);
    printf("value of a is %d\n",a);

    return 0;
}
