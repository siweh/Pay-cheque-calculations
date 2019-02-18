#include<stdio.h>

int main()
{
	float salary,tax,gross;
	int weeks;

	printf("\nHow many times did you work this month in weeks?: ");
	scanf("%d",&weeks);

	printf("\nPlease enter your salary for a week:R");
	scanf("%f",&salary);

	printf("\nYour basic salary before deductions is %.2f",salary* weeks);

	tax = salary - (10/100);
	gross = salary + tax;

	printf("\nYour tax is %2.f",tax);

	printf("\nYour gross income is %.2f",gross);

	return 0;
}


