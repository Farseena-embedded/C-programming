#include<stdio.h>
#pragma pack(1)
struct student   //structure definition
{
    char name[20];
    short int roll_no;
    short int sem;
};
int main()
{
    struct student s[5]; // Declare an array of 5 student structures
    int i;               // Loop variable
    // Loop to get input from user  
    for (i=0;i<5;i++)
    {
        printf ("\n Enter the details of students %d \n",i+1);

        printf("Name : ");
        scanf(" %[^\n]",s[i].name);// Reads full name including spaces
        // Leading space clears leftover newline from buffer

        printf("Roll No : ");
        scanf("%hd",&s[i].roll_no);  // %hd is format specifier for short int

        printf("Semester : ");
        scanf("%hd",&s[i].sem);

    }
    printf ("\n------Student Details-------\n");
    // Loop to display student details
    for (i=0;i<5;i++)
    {
        printf("\n Student %d\n",i+1);
        printf("Name:%s \n",s[i].name);
        printf("Roll No:%d \n",s[i].roll_no);
        printf("Semester:%d \n",s[i].sem);

    }
    // sizeof(s) gives total size of all 5 student structures combined
    printf("\nSize of structure is:%d\n",sizeof(s));
    // sizeof(struct student) gives size of a single student structure
    printf("Size of structure is:%d\n",sizeof(struct student));
    // sizeof(s[0]) gives size of one element in the structure array
    printf("Size of structure is:%d\n",sizeof(s[0]));

    return 0;
}
