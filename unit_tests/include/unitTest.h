#pragma once

#include <string_view>
#include <string>
#include <vector>
#include <functional>

class UnitTest
{
	using TestFunction = std::function<void(UnitTest &)>;

public:
	explicit UnitTest(std::string test_name)
		: _passed_count{0},
		  _failed_count{0},
		  _test_name{std::move(test_name)}
	{
	}

	void add_test(TestFunction test)
	{
		_tests.push_back(test);
	}

	void run_tests();

	// Utility function to print the result of a test
	void test_result(std::string_view test_context, bool passed);

private:
	// Print the header for a test section
	void print_header();

	// Collect test results
	void collect_results();

	const std::string get_passed_test_text() const
	{
		return "✅ " + _test_name + " TESTS PASSED (" + std::to_string(_passed_count) + " total)";
	}

	const std::string get_failed_test_text() const
	{
		return "❌ " + _test_name + " TESTS FAILED (" + std::to_string(_failed_count) + " total)";
	}

	const std::string get_header() const
	{
		return "STARTING " + _test_name + " UNIT TESTS";
	}

private:
	int _passed_count;
	int _failed_count;
	std::string _test_name;
	std::vector<TestFunction> _tests{};
};
