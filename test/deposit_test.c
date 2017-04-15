#include "deposit.h"
#include <stdio.h>

CTEST(test_input, simple)
{
    // Given
    const int a = 10;
    const int b = 20000;

    // When
    const int result = CheckInput(a, b);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
