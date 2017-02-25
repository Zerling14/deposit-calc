#include <stdio.h>
#include <stdlib.h>

int CheckInput(int depDay, int sum)
{
	if ((depDay >= 0) && (depDay <= 365) && (sum >= 10000))
		return 1;
	return 0;
}

int CalcSumDeposit(int depDay, int sum)
{
	float bonusPercent = 0;
	if (sum >= 100000)
		bonusPercent = 0.01;
	if (depDay <= 30)
	{
		sum *= 0.9;
	}
	else if (depDay <= 120)
	{
		sum *= 1.0 + 0.02 + bonusPercent * 1;
	}
	else if (depDay <= 240)
	{
		sum *= 1.0 + 0.6 + bonusPercent * 2;
	}
	else if (depDay <= 365)
	{
		sum *= 1.0 + 0.12 + bonusPercent * 3;
	}
	return sum;
}

int main()
{
	int depDay, sum;
	printf("Введите срок вклада: ");
	scanf("%d", &depDay);
	printf("Введите сумму вклада: ");
	scanf("%d", &sum);

	if (CheckInput(depDay, sum) == 0)
	{
		printf("Некоректный ввод\n");
		return 1;
	}

	printf("%d", CalcSumDeposit(depDay, sum));

	return 0;
}
