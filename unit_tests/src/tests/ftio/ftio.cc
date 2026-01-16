#include "libft/ftio/ftio.h"

#include <fcntl.h>
#include <unistd.h>

#include <climits>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "libft/string/color.h"
#include "unitTest.h"

static const char* const filename = "io_test.txt";

std::string read_test_file(const std::string& filename) {
	std::ifstream ifs(filename);
	if (!ifs.is_open()) return "ERROR_OPENING";
	return std::string((std::istreambuf_iterator<char>(ifs)),
					   std::istreambuf_iterator<char>());
}

void putchar_fd_test(UnitTest& ut) {
	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putchar_fd('A', fd);
		close(fd);
	}

	const std::string res = read_test_file(filename);

	ut.test_result("ft_putchar_fd: 'A'", res == "A");
}

void putstr_fd_test(UnitTest& ut) {
	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putstr_fd("Hello", fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putstr_fd: 'Hello'", res == "Hello");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putstr_fd("42 Yerevan", fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putstr_fd: '42 Yerevan'", res == "42 Yerevan");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putstr_fd("", fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putstr_fd: empty string", res == "");
	}
}

void putendl_fd_test(UnitTest& ut) {
	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putendl_fd("Line", fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putendl_fd: 'Line' with newline", res == "Line\n");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putendl_fd("", fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putendl_fd: empty string with newline", res == "\n");
	}
}

void putnbr_fd_test(UnitTest& ut) {
	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putnbr_fd(42, fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putnbr_fd: 42", res == "42");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putnbr_fd(-42, fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putnbr_fd: -42", res == "-42");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putnbr_fd(0, fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putnbr_fd: 0", res == "0");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putnbr_fd(INT_MIN, fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putnbr_fd: -2147483648", res == "-2147483648");
	}

	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		ft_putnbr_fd(INT_MAX, fd);
		close(fd);
	}

	{
		const std::string res = read_test_file(filename);
		ut.test_result("ft_putnbr_fd: 2147483647", res == "2147483647");
	}
}

void test_ft_io_module() {
	UnitTest ut{"IO"};

	ut.add_test(putchar_fd_test);
	ut.add_test(putstr_fd_test);
	ut.add_test(putendl_fd_test);
	ut.add_test(putnbr_fd_test);

	ut.run_tests();
	unlink(filename);
}
