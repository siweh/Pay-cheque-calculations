#include<stdio.h>

int main()
{
	float wage,tax,gross;
	int week;

	printf("\nHow much do you earn per week?:R ");
	scanf("%f",&wage);

	printf("\nHow many times did you work this month in weeks?: ");
	scanf("%d",&week);


	wage = wage * week;
	tax = wage * 0.1;
	gross = wage - tax;

	printf("\nYour basic wage after deductions R%2.f",wage);

	printf("\nYour tax is R%2.f",tax);

	printf("\nYour gross income is R%.2f",gross);

	return 0;
}


