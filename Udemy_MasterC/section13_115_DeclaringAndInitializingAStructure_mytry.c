#include <stdio.h>

struct employee
{
    char name[20];
    int hireDate;
    float salary;
};

int main()
{
    struct employee employee1 = {"David", 13, 430.0F};
    
    printf("employee number1\n\tname: %s\n\tHiredate: %i\n\tSalary: %.1f\n", employee1.name, employee1.hireDate, employee1.salary);

    struct employee employee2;
    printf("Enter employee2's name: ");
    scanf("%s", employee2.name);
    
    printf("Enter employee2's hire date: ");
    scanf("%d", &employee2.hireDate);
    
    printf("Enter employee2's salary: ");
    scanf("%f", &employee2.salary);

    printf("\nemployee number2\n\tname: %s\n\tHiredate: %i\n\tSalary: %.1f\n", employee2.name, employee2.hireDate, employee2.salary);
}