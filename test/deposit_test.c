#include "ctest.h"
#include "deposit.h"

CTEST(CalcSumDeposit, calc_sum_0_less_100k)
{
	const int day = 0;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 89999;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_0_more_100k)
{
	const int day = 0;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 90000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_30_less_100k)
{
	const int day = 30;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 89999;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_30_more_100k)
{
	const int day = 30;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 90000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_31_less_100k)
{
	const int day = 31;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 101998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_31_more_100k)
{
	const int day = 31;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 103000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_120_less_100k)
{
	const int day = 120;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 101998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_120_more_100k)
{
	const int day = 120;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 103000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_121_less_100k)
{
	const int day = 121;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 105998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_121_more_100k)
{
	const int day = 121;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 108000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_240_less_100k)
{
	const int day = 240;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 105998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_240_more_100k)
{
	const int day = 240;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 108000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_241_less_100k)
{
	const int day = 241;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 111998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_241_more_100k)
{
	const int day = 241;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 115000;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_365_less_100k)
{
	const int day = 365;
	const int dep = 99999;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 111998;
	ASSERT_EQUAL(expect, result);
}

CTEST(CalcSumDeposit, calc_sum_365_more_100k)
{
	const int day = 365;
	const int dep = 100000;
	const int result = CalcSumDeposit(day, dep);
	
	const int expect = 115000;
	ASSERT_EQUAL(expect, result);
}


