
#include <stdio.h>
int main()

{
    int a = 5;         // Declare an integer variable
    float b = 6.2;     // Declare an float variable
    char c = 'A';      // Declare an charactor variable
    char d = '5';      // Declare an charactor variable

    printf("Integer value is:%d \n",a);   // Print integer value
    printf("Float value is:%f \n",b);     // Print float value
    printf("Float value is:%.2f \n",b);   // Print float value with 2 decimal points
    printf("Charactor value is:%c \n",c);  // Print charator value 
    printf("Charactor value is:%c \n",d);  // Print charactor value 

    printf("ASCII value is:%d \n",d);   // prints 53 (ASCII value of '5')

    return 0;
}