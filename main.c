#include <stdio.h>
#include <stdlib.h>

int CheckInput(int time, int sum)
{
	if ((time >= 0) && (time <= 365) && (sum >= 10000))
		return 1;
	return 0;
}

int CalcSumDeposit(int time, int sum)
{
	float bonusPercent = 0;
	if (sum >= 100000)
		bonusPercent = 0.01;
	if (time <= 30)
	{
		sum *= 0.9;
	}
	else if (time <= 120)
	{
		sum *= 1.0 + 0.02 + bonusPercent * 1;
	}
	else if (time <= 240)
	{
		sum *= 1.0 + 0.6 + bonusPercent * 2;
	}
	else if (time <= 365)
	{
		sum *= 1.0 + 0.12 + bonusPercent * 3;
	}
	return sum;
}

int main()
{
	int time, sum;
	printf("Введите срок вклада: ");
	scanf("%d", &time);
	printf("Введите сумму вклада: ");
	scanf("%d", &sum);

	if (CheckInput(time, sum) == 0)
	{
		printf("Некоректный ввод\n");
		return 0;
	}

	printf("%d", CalcSumDeposit(time, sum));

	return 0;
}
