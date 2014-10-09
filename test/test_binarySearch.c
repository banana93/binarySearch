#include "unity.h"
#include "binarySearch.h"

void setUp(void){}

void tearDown(void){}

/**
 *   ---------------
 *  | 1 | 2 | 3 | 4 |
 *   ---------------
 */
void test_binarySearch_given_4_element_array_should_be_able_to_find_number_2(void)
{
	int array[] = {1, 2, 3 , 4};
	int result;
	
	result = binarySearch(2, array, 0, 3);
	TEST_ASSERT_EQUAL(1, result);
	TEST_ASSERT_EQUAL(2, array[result]);
}

/**
 *   ---------------
 *  | 1 | 2 | 3 | 4 |
 *   ---------------
 */
void test_binarySearch_given_4_element_array_should_be_able_to_find_number_1(void)
{
	int array[] = {1, 2, 3 , 4};
	int result;
	
	result = binarySearch(1, array, 0, 3);
	TEST_ASSERT_EQUAL(0, result);
	TEST_ASSERT_EQUAL(1, array[result]);
}

/**
 *   ---------------
 *  | 1 | 2 | 3 | 4 |
 *   ---------------
 */
void test_binarySearch_given_4_element_array_should_be_able_to_find_number_4(void)
{
	int array[] = {1, 2, 3 , 4};
	int result;
	
	result = binarySearch(4, array, 0, 3);
	TEST_ASSERT_EQUAL(3, result);
	TEST_ASSERT_EQUAL(4, array[result]);
}

/**
 *   ------------------------------------------------------------
 *  | 2 | 4 | 6 | 8 | 10 | 12 | 14 | 16 | 18 | 20 | 22 | 24 | 26 |
 *   ------------------------------------------------------------
 */
void test_binarySearch_given_13_element_array_should_be_able_to_find_number_4(void)
{
	int array[] = {2, 4 ,6 ,8 ,10 , 12, 14, 16, 18, 20, 22, 24, 26};
	int result;
	
	result = binarySearch(4, array, 0, 12);
	TEST_ASSERT_EQUAL(1, result);
	TEST_ASSERT_EQUAL(4, array[result]);
}

/**
 *   ------------------------------------------------------------
 *  | 2 | 4 | 6 | 8 | 10 | 12 | 14 | 16 | 18 | 20 | 22 | 24 | 26 |
 *   ------------------------------------------------------------
 */
void test_binarySearch_given_13_element_array_should_be_able_to_find_number_10(void)
{
	int array[] = {2, 4 ,6 ,8 ,10 , 12, 14, 16, 18, 20, 22, 24, 26};
	int result;
	
	result = binarySearch(10, array, 0, 12);
	TEST_ASSERT_EQUAL(4, result);
	TEST_ASSERT_EQUAL(10, array[result]);
}

/**
 *   ------------------------------------------------------------
 *  | 2 | 4 | 6 | 8 | 10 | 12 | 14 | 16 | 18 | 20 | 22 | 24 | 26 |
 *   ------------------------------------------------------------
 */
void test_binarySearch_given_13_element_array_should_be_able_to_find_number_26(void)
{
	int array[] = {2, 4 ,6 ,8 ,10 , 12, 14, 16, 18, 20, 22, 24, 26};
	int result;
	
	result = binarySearch(26, array, 0, 12);
	TEST_ASSERT_EQUAL(12, result);
	TEST_ASSERT_EQUAL(26, array[result]);
}
