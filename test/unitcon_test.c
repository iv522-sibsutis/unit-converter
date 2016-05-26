#include <ctest.h>
#include <unicon.h>

CTEST(quadratic_equation_suite, file_long_transfer_nm_in_nm_fractional) {
    // Given
    const char a[2] = "nm";
    const char b[2] = "nm";
	const char file_name[10] = "Long.txt"
	const float number = 24.7;
 
    // When
	float num;
    num  = Result(number, a, b, file_name);

    // Then
	const float expected_number = 24.7;
    ASSERT_DBL_NEAR(expected_number, num);
}

CTEST(quadratic_equation_suite, file_long_transfer_cm_in_km_negative) {
    // Given
    const char a[2] = "cm";
    const char b[2] = "km";
	const char file_name[10] = "Long.txt"
	const float number = -29;
 
    // When
	float num;
    num  = Result(number, a, b, file_name);

    // Then
	const float expected_number = -0.00029;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, file_long_transfer_km_in_m_whole) {
    // Given
    const char a[2] = "km";
    const char b[2] = "m";
	const char file_name[10] = "Long.txt"
	const float number = 999;
 
    // When
	float num;
    num  = Result(number, a, b, file_name);

    // Then
	const float expected_number = 999000;
    ASSERT_DBL_NEAR(expected_number, num);
}
