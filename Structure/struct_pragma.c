#include <stdio.h>
#pragma pack(1)

struct student  //structure definition
{
    char last_name;
    int roll_no;
    int sem;
    float mark;
};

int main()
{
    struct student s1;
    //assign value
    s1.last_name='K';
    s1.roll_no=25;
    s1.sem=4;
    s1.mark=80.5;
    //display values
    printf("student name:AYSHA ");
    printf("%c\n",s1.last_name);
    printf("Roll No :%d\n",s1.roll_no);
    printf("Semester :%d\n",s1.sem);
    printf("Mark :%.2f\n",s1.mark);
    //display size of data types
    printf("Size of charactor:%d\n",sizeof(char));
    printf("Size of interger:%d\n",sizeof(int));
    printf("Size of float:%d\n",sizeof(float));
    printf("Size of structure:%d\n",sizeof(s1));
    return 0;
}
