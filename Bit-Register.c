#include <stdio.h>

   //Function to modified bit
unsigned char modifyRegister(unsigned char reg)
{
    reg = reg | (1 << 2);    // Set 3rd bit (bit index 2)
    reg = reg & ~(1 << 5);   // Clear 6th bit (bit index 5)
    reg = reg ^ (1 << 0);    // Toggle 1st bit (bit index 0)

    return reg;
}
     // Binary print without loop
void printBin(unsigned char a)
{
     printf("%d",(a &(1<<7))?1:0);
     printf("%d",(a &(1<<6))?1:0);
     printf("%d",(a &(1<<5))?1:0);
     printf("%d",(a &(1<<4))?1:0);
     printf("%d",(a &(1<<3))?1:0);
     printf("%d",(a &(1<<2))?1:0);
     printf("%d",(a &(1<<1))?1:0);
     printf("%d",(a &(1<<0))?1:0);
     printf("\n");
}

int main()
{
    unsigned char reg = 0;                 // Decimal Input 0: (00000000)

    printf("Before modification:");
    
    printBin(reg);                        //print the current register value in binary format
    reg = modifyRegister(reg);            //Modify the register and store the updated value 

    printf("\nAfter modification : " );   // Display message
    printBin(reg);                       //Print the modified register value
    
    return 0;
}