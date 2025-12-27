#include <iostream>
#include <string>

#include "ctype/ft_ctype.h"

const char *const GREEN = "\033[1;32m";
const char *const RED = "\033[1;31m";
const char *const RESET = "\033[0m";

struct TestResult
{
	int passed = 0;
	int failed = 0;
};

TestResult global_result;

void expect(bool condition, const std::string &test_name)
{
	if (condition)
	{
		++global_result.passed;
	}
	else
	{
		++global_result.failed;
		std::cout << RED << "[FAILED] " << RESET << test_name << std::endl;
	}
}

void test_ctype_logic()
{
	// ft_isalpha
	expect(ft_isalpha('a') != 0, "ft_isalpha('a') should be non-zero");
	expect(ft_isalpha('Z') != 0, "ft_isalpha('Z') should be non-zero");
	expect(ft_isalpha('1') == 0, "ft_isalpha('1') should be zero");

	// ft_isdigit
	expect(ft_isdigit('5') != 0, "ft_isdigit('5') should be non-zero");
	expect(ft_isdigit('x') == 0, "ft_isdigit('x') should be zero");

	// ft_isspace
	expect(ft_isspace(' ') != 0, "ft_isspace(' ') should be non-zero");
	expect(ft_isspace('\n') != 0, "ft_isspace('\\n') should be non-zero");
	expect(ft_isspace('A') == 0, "ft_isspace('A') should be zero");

	// ft_tolower/toupper
	expect(ft_tolower('A') == 'a', "ft_tolower('A') should be 'a'");
	expect(ft_toupper('g') == 'G', "ft_toupper('g') should be 'G'");
	expect(ft_tolower('1') == '1', "ft_tolower('1') should remain '1'");

	// ft_isascii
	expect(ft_isascii(65) != 0, "ft_isascii(65) should be non-zero");
	expect(ft_isascii(200) == 0, "ft_isascii(200) should be zero");
}

int test_ft_ctype_module()
{
	std::cout << "--- Starting CTYPE Unit Tests ---" << std::endl;

	test_ctype_logic();

	std::cout << "\n---------------------------------" << std::endl;
	if (global_result.failed == 0)
	{
		std::cout << GREEN << "ALL TESTS PASSED (" << global_result.passed << " total)" << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "SOME TESTS FAILED!" << RESET << std::endl;
		std::cout << "Passed: " << global_result.passed << std::endl;
		std::cout << "Failed: " << global_result.failed << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;

	return (global_result.failed == 0) ? 0 : 1;
}
