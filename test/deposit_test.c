#include "ctest.h"
#include "deposit.h"

CTEST(arithmetic_suite, simle_sum)
{
	const int day = 20;
	const int dep = 30000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 27000;
	ASSERT_DBL_NEAR(expect, result);
}