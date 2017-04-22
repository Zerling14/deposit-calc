#include "ctest.h"
#include "deposit.h"

CTEST(CheckInput, valid_input_-1_less_10k)
{
	const int day = -1;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_-1_more_10k)
{
	const int day = -1;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_0_less_10k)
{
	const int day = -1;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_0_more_10k)
{
	const int day = 0;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_TRUE(result);
}

CTEST(CheckInput, valid_input_0_less_10k)
{
	const int day = 365;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_0_more_10k)
{
	const int day = 365;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_TRUE(result);
}

CTEST(CheckInput, valid_input_0_less_10k)
{
	const int day = 366;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_0_more_10k)
{
	const int day = 366;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}