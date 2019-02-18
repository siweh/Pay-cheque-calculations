#include<stdio.h>

int main()
{
	float wage,monthWage,tax,gross;
	int week;

	printf("\nHow much do you earn per week?:R ");
	scanf("%f",&wage);

	printf("\nHow many times did you work this month in weeks?: ");
	scanf("%d",&week);


	monthWage = wage * week;
	tax = monthWage * 0.1;
	gross = monthWage - tax;

	printf("\nYour basic wage a month before deductions R%2.f",monthWage);

	printf("\nYour tax is R%2.f",tax);

	printf("\nYour gross income is R%.2f",gross);

	return 0;
}


