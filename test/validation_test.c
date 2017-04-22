#include <ctest.h>
#include <deposit.h>

CTEST(CheckInput, valid_input_negative_less_10k)
{
	const int day = -1;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_negative_more_10k)
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

CTEST(CheckInput, valid_input_365_less_10k)
{
	const int day = 365;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_365_more_10k)
{
	const int day = 365;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_TRUE(result);
}

CTEST(CheckInput, valid_input_366_less_10k)
{
	const int day = 366;
	const int dep = 0;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}

CTEST(CheckInput, valid_input_366_more_10k)
{
	const int day = 366;
	const int dep = 10000;
	const int result = CheckInput(day, dep);
	
	ASSERT_FALSE(result);
}
