#include <ctest.h>
#include <unitcon.h>
#include <stdio.h>

CTEST(quadratic_equation_suite, long_transfer_nm_in_nm_fractional) {
    // Given
    char a[20] = "nm";
    char b[20] = "nm";
	char *file_name = "Long.txt";
	const float number = 24.7;
 
    // When
	double num;
    num = Result(number, a, b, file_name);
    // Then
	const double expected_number = 24.70000;
    ASSERT_DBL_NEAR(expected_number, num);
}

CTEST(quadratic_equation_suite, long_transfer_cm_in_km_negative) {
    // Given
    char a[20] = "cm";
    char b[20] = "km";
	char *file_name = "Long.txt";
	const float number = -29;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = -0.000290;
	printf("%f",num);
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, long_transfer_km_in_m_whole) {
    // Given
	char a[20] = "km";
	char b[20] = "m";
	char *file_name = "Long.txt";
	const float number = 999;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 999000.000000;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, square_transfer_mm_in_mm_negative) {
    // Given
    char a[20] = "mm2";
    char b[20] = "mm2";
	char *file_name = "Square.txt";
	const float number = -570;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = -570.000000;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, square_transfer_m_in_ha_whole) {
    // Given
    char a[20] = "m2";
    char b[20] = "ha";
	char *file_name = "Square.txt";
	const float number = 45;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 0.004500;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, square_transfer_ha_in_cm) {
    // Given
    char a[20] = "ha";
    char b[20] = "сm2";
	char *file_name = "Square.txt";
	const float number = 23.78988;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 2378988000.000000;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, speed_transfer_kms_in_kmh) {
    // Given
    char a[20] = "km/s";
    char b[20] = "km/h";
	char *file_name = "Speed.txt";
	const float number = 148;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 532799.957376;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, speed_transfer_kmh_in_mc) {
    // Given
    char a[20] = "km/h";
    char b[20] = "m/s";
	char *file_name = "Speed.txt";
	const float number = 509;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 141.389000;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, time_transfer_sec_in_years) {
    // Given
    char a[20] = "sec";
    char b[20] = "year";
	char *file_name = "Time.txt";
	const float number = 150000;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 0.004756;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, time_transfer_day_in_week) {
    // Given
    char a[20] = "day";
    char b[20] = "week";
	char *file_name = "Time.txt";
	const float number = 7;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = 1;
    ASSERT_DBL_NEAR(expected_number, num);
}
CTEST(quadratic_equation_suite, time_transfer_month_in_hour) {
    // Given
    char a[20] = "month";
    char b[20] = "hour";
	char *file_name = "Time.txt";
	const float number = -3;
 
    // When
	double num;
    num  = Result(number, a, b, file_name);

    // Then
	const double expected_number = -2191.392000;
    ASSERT_DBL_NEAR(expected_number, num);
}
