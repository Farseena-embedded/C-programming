#include<stdio.h>
#pragma pack(1)

struct A
{
    char x;
    int y;
    char z;
    float a;
};
int main()
{
    printf("Size of structure is :%d\n",sizeof(struct A));

    return 0;
}