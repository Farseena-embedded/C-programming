#include<stdio.h>
struct A
{
    char a;
    int b;
    char c;
};

struct B
{
    char X;
    char Y;
    int Z;
};
int main()
{

    printf("size of structure A: %d\n",sizeof(struct A));
    printf("size of structure B: %d\n",sizeof(struct B));

}