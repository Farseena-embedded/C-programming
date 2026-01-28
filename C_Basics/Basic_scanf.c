
#include <stdio.h>
int main()
{
    int age;          // Declare integer variable
    char last_name;   // Declare charactor variable
    
    printf ("My name is Farseena ");  // Print name on screen
    scanf(" %c",&last_name) ;          // Read charactor  from user and store in last_name 
    printf("%c",last_name) ;        // Print the enter value

    printf("\nMy age is : ");           // Ask user to input   
    scanf("%d", &age);            // Read integer from user and store in age
    printf(" %d", age) ;             // Print the enter value

    return 0;
}