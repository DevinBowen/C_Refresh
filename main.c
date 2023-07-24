#include <stdio.h>

void point(){
    printf("A lot of tests.\n");
    
    int num = 0;
    int *pnum;
    
    num = 10;
    pnum = &num;
    printf("pnum address: %p\n", pnum);
    printf("pnum: %d\n", *pnum);
    printf("num address: %p\n", &num);
    printf("pnum address: %p\n", (void*)&pnum);
    printf("pnum size: %d bytes\n", (int)sizeof(pnum));
    
}

int main(int argc, char *argv[])
{
    point();
    
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    return 0;
}