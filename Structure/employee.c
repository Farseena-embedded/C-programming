#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int emp_ID;
    float salary;

};
int main()
{ 
struct employee emp1;
emp1.emp_ID= 302;
strcpy(emp1.name,"Farseena CK"); //string
emp1.salary=40000;
//print employee details
printf("Name of the employee :%s\n",emp1.name);
printf("ID of the employee :%d \n",emp1.emp_ID);
printf("Salary of employee :%.2f\n",emp1.salary);
//print size of data types
printf("Size of the float=%d\n",sizeof(float));
printf("Size of the integer=%d\n",sizeof(int));
printf("size of the char=%d\n",sizeof(char[20]));
printf("size of the structure=%d\n",sizeof(emp1));

return 0;

}



