#include<stdio.h>

int main()
{
	float salary,tax,gross;
	int weeks,month;
	month = 30;

	printf("\nHow many times did you work this month in weeks?: ");
	scanf("%d",&weeks);

	printf("\nPlease enter your salary for a week:R");
	scanf("%f",&salary);

	printf("\nYour basic salary before deductions is %.2f",salary);

	tax = salary - (10/100) + weeks + month;
	gross = salary + tax + weeks + month;

	printf("\nYour tax is %2.f",tax);

	printf("\nYour gross income is %.2f",gross);

	return 0;
}


