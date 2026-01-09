// #include <iostream>
// #include <fstream>
// #include <string>
// #include <unistd.h>
// #include <fcntl.h>
// #include <iomanip>
// #include <vector>

// #include "libft/ftio/ftio.h"
// #include "libft/string/color.h"

// #include "test.h"
// #include "utils.h"

// struct IO_Result
// {
// 	int passed = 0;
// 	int failed = 0;
// };

// // Օժանդակ ֆունկցիա ֆայլի պարունակությունը կարդալու համար
// std::string read_test_file(const std::string &filename)
// {
// 	std::ifstream ifs(filename);
// 	if (!ifs.is_open())
// 		return "ERROR_OPENING";
// 	return std::string((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
// }

// void expect_io(const std::string &expected, const std::string &test_name, IO_Result &res)
// {
// 	std::string actual = read_test_file("io_test.txt");
// 	std::cout << "  " << std::left << std::setw(45) << test_name;

// 	if (actual == expected)
// 	{
// 		std::cout << TEST_OK << std::endl;
// 		res.passed++;
// 	}
// 	else
// 	{
// 		std::cout << TEST_FAIL << " (Expected: '" << expected << "', Got: '" << actual << "')" << std::endl;
// 		res.failed++;
// 	}
// 	// Մաքրում ենք ֆայլը հաջորդ թեստի համար
// 	int fd = open("io_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	close(fd);
// }

// int test_ft_io_module()
// {
// 	TestUtils res;
// 	const char *filename = "io_test.txt";

// 	// Print header for IO tests
// 	print_header("IO UNIT TESTS");

// 	// 1. ft_putchar_fd
// 	{
// 		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putchar_fd('G', fd);
// 		close(fd);
// 		expect_io("G", "ft_putchar_fd: single character", res);
// 	}

// 	// 2. ft_putstr_fd
// 	{
// 		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putstr_fd("42 Yerevan", fd);
// 		close(fd);
// 		expect_io("42 Yerevan", "ft_putstr_fd: basic string", res);

// 		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putstr_fd("", fd);
// 		close(fd);
// 		expect_io("", "ft_putstr_fd: empty string", res);
// 	}

// 	// 3. ft_putendl_fd
// 	{
// 		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putendl_fd("Line", fd);
// 		close(fd);
// 		expect_io("Line\n", "ft_putendl_fd: string with newline", res);
// 	}

// 	// 4. ft_putnbr_fd (Edge cases)
// 	{
// 		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putnbr_fd(12345, fd);
// 		close(fd);
// 		expect_io("12345", "ft_putnbr_fd: positive number", res);

// 		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putnbr_fd(0, fd);
// 		close(fd);
// 		expect_io("0", "ft_putnbr_fd: zero", res);

// 		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 		ft_putnbr_fd(-2147483648, fd);
// 		close(fd);
// 		expect_io("-2147483648", "ft_putnbr_fd: INT_MIN overflow test", res);
// 	}

// 	unlink(filename);

// 	// Final Report
// 	std::cout << "\n"
// 			  << std::string(52, '-') << std::endl;
// 	if (res.failed == 0)
// 	{
// 		std::cout << GREEN << "✅ ALL IO TESTS PASSED (" << res.passed << " total)" << RESET << std::endl;
// 	}
// 	else
// 	{
// 		std::cout << RED << "❌ IO MODULE FAILED! (Passed: " << res.passed << ", Failed: " << res.failed << ")" << RESET << std::endl;
// 	}
// 	std::cout << std::string(52, '-') << "\n"
// 			  << std::endl;

// 	return (res.failed == 0) ? 0 : 1;
// }
