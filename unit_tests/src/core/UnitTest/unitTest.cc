#include <iostream>
#include <iomanip>
#include <string_view>

#include "libft/string/color.h"

#include "unitTest.h"

void UnitTest::test_result(std::string_view test_context, bool passed)
{
	std::cout << "  " << std::left << std::setw(44) << test_context;

	if (passed)
	{
		std::cout << BOLD_GREEN << "[ OK ] " << RESET << '\n';
		++_passed_count;
	}
	else
	{
		std::cout << BOLD_RED << "[FAIL] " << RESET << '\n';
		++_failed_count;
	}
}

void UnitTest::run_tests()
{
	print_header();

	for (const auto &test : _tests)
	{
		test(*this);
	}

	collect_results();
}

void UnitTest::print_header()
{
	std::cout << '\n'
			  << BOLD_CYAN << "┌" << std::string(50, '=') << "┐" << RESET << '\n';

	std::cout << BOLD_CYAN << "│ "
			  << std::left << std::setw(49)
			  << get_header()
			  << "│" << RESET << '\n';

	std::cout << BOLD_CYAN << "└" << std::string(50, '=') << "┘" << RESET << '\n';
}

void UnitTest::collect_results()
{
	std::cout << '\n'
			  << BOLD_CYAN << "┌" << std::string(50, '=') << "┐" << RESET << '\n';

	std::cout << BOLD_CYAN << "│ " << BOLD_GREEN
			  << std::left << std::setw(49)
			  << get_passed_test_text()
			  << BOLD_CYAN << " │" << RESET << '\n';

	if (_failed_count)
	{
		std::cout << BOLD_CYAN << "│ " << BOLD_RED
				  << std::left << std::setw(49)
				  << get_failed_test_text()
				  << BOLD_CYAN << " │" << RESET << '\n';
	}
	std::cout << BOLD_CYAN << "└" << std::string(50, '=') << "┘" << RESET << '\n';
}
