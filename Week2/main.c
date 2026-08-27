#include <stdio.h>
int main(){
    
//Declare variables
double Balance=0;
double Expense=0;
double Revenue=0;
Balance=Revenue-Expense;

//Welcome Message
printf("MUNICIPAL BUDGET CALCULATOR/n");

//USER PROMPT REVENUE
printf("Please enter the total revenue: ");
scanf("%lf", &Revenue);

//USER PROMPT EXPENSE
printf("Please enter the total expense: ");
scanf("%lf", &Expense);

//BALANCE CALCULATION
Balance= Revenue-Expense;

//Display , Revenue, Expense and Balance
printf("Revenue=%.2lf Expense=%.2lf Balance=%.2lf", Revenue, Expense, Balance );

// Check for profit or loss
if (Expense > Revenue) {
printf("Loss: %.2lf\n", -Balance);

}

if (Revenue > Expense) {

printf("Profit: %.2lf\n", Balance);

    return 0;

}

