#include<stdio.h>
#include<string.h>
struct {
    char name[15];
    int empid;
    float salary;
    char department[15];
}emp;
int main()
{
    printf("enter the name:");
    fgets(emp.name,15,stdin);
    printf("enter the employee id:");
    scanf("%d",&emp.empid);
    printf("enter the salary:");
    scanf("%f",&emp.salary);
    getchar();
    printf("enter the department:");
    fgets(emp.department,15,stdin);

    printf("\nthe details entered are:\n");
    printf("the name is:%s",emp.name);
    printf("the employee id is:%d\n",emp.empid);
    printf("the salary is:%.2f\n",emp.salary);
    printf("the department is:%s",emp.department);
    return 0;
}