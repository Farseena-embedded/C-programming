#include<stdio.h>
int main()
{
    int marks = 80;

    if(marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 60)
    {
        printf("Grade B");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}