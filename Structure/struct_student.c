#include <stdio.h>
struct student  //structure definition
{
    char name[20]; // Stores student name
    int age;       // Stores age
    float grade;   // Stores grade
};
int main()
{
    //declaration& initialization structure variables
    struct student S1={"RAHUL K", 20, 18.3};
    //Declaring another structure
    struct student S2={"SAM", 21, 17.2};

    printf("%s \t %d \t %.2f \n",S1.name,S1.age,S1.grade);// Prints S1 details in single line
    printf("%s \n %d \n %.2f \n",S2.name,S2.age,S2.grade);// Prints S2 details in separate lines

    return 0;
}