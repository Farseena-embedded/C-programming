#include<stdio.h>
#pragma pack(1)
struct A
{
  int a:1;  // only 1 bit
  int b:3;  // 3 bit
  int c:2;  // 2 bit
};
struct B
{
    int x:12;  // ie 1 byte and 4bit 
    char y:4;  //4 bit
    char z:1;  // 1 bit
};
struct C
{
    char s;   // 1 byte
    int r:5;  //5 bit
    int w:4;  // 4 bit
    char n;   // 1  byte
};
int main()
{
    printf("size of the structure A:%d \n",sizeof(struct A));
    printf("size of the structure B:%d \n",sizeof(struct B));
    printf("size of the structure C:%d \n",sizeof(struct C));
}
