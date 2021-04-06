#include<stdio.h>
int main()
{
    int s=100,e=200;
    printf("swaping before two number s:%d e:%d",s,e);
    s=s+e;
    e=s-e;
    s=s-e;

    printf("\nswaping after two number s:%d e: %d",s,e);
    return 0;
 
}