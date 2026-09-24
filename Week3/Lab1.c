#include <stdio.h>

int main(void)
{
    double salary = 0.0;
    double housingAllowance = 0.0;
    double transportAllowance = 0.0;
    double tax = 0.0;
    double grossSalary = 0.0;
    double netSalary = 0.0;

    printf("Enter salary: ");
    scanf("%lf", &salary);

    printf("Enter housing allowance: ");
    scanf("%lf", &housingAllowance);

    printf("Enter transport allowance: ");
    scanf("%lf", &transportAllowance);

    printf("Enter tax: ");
    scanf("%lf", &tax);

    grossSalary = salary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    if (netSalary >= 20000)
    {
        printf("High Income\n");
    }
    else
    {
        printf("Standard Income\n");
    }

    return 0;
}