int CheckInput(int depDay, int sum)
{
	if ((depDay >= 0) && (depDay <= 365) && (sum >= 10000))
		return 1;
	return 0;
}
