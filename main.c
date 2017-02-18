#include <stdio.h>
#include <stdlib.h>

int CheckInput(int time, int sum)
{
	if ((time >= 0) && (time <=365) && (sum >= 10000))
		return 1;
	return 0;
}

int main()
{
	int time, sum, percent;
	printf("Введите срок вклада: ");
	scanf("%d", &time);
	printf("Введите сумму вклада: ");
	scanf("%d", &sum);

	return 0;
}
