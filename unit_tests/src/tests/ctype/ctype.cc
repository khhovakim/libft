#include "libft/ctype/ctype.h"

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "libft/string/color.h"
#include "unitTest.h"

void isalpha_test(UnitTest& ut) {
	ut.test_result("ft_isalpha: 'a' (true)",
				   (bool)ft_isalpha('a') == (bool)isalpha('a'));
	ut.test_result("ft_isalpha: 'Z' (true)",
				   (bool)ft_isalpha('Z') == (bool)isalpha('Z'));
	ut.test_result("ft_isalpha: '1' (false)",
				   (bool)ft_isalpha('1') == (bool)isalpha('1'));
	ut.test_result("ft_isalpha: '!' (false)",
				   (bool)ft_isalpha('!') == (bool)isalpha('!'));
}

void isdigit_test(UnitTest& ut) {
	ut.test_result("ft_isdigit: '5' (true)",
				   (bool)ft_isdigit('5') == (bool)isdigit('5'));
	ut.test_result("ft_isdigit: '0' (true)",
				   (bool)ft_isdigit('0') == (bool)isdigit('0'));
	ut.test_result("ft_isdigit: '9' (true)",
				   (bool)ft_isdigit('9') == (bool)isdigit('9'));
	ut.test_result("ft_isdigit: 'a' (false)",
				   (bool)ft_isdigit('a') == (bool)isdigit('a'));
}

void isalnum_test(UnitTest& ut) {
	ut.test_result("ft_isalnum: '7' (true)",
				   (bool)ft_isalnum('7') == (bool)isalnum('7'));
	ut.test_result("ft_isalnum: 'Q' (true)",
				   (bool)ft_isalnum('Q') == (bool)isalnum('Q'));
	ut.test_result("ft_isalnum: '#' (false)",
				   (bool)ft_isalnum('#') == (bool)isalnum('#'));
}

void isspace_test(UnitTest& ut) {
	ut.test_result("ft_isspace: space ' ' (true)",
				   (bool)ft_isspace(' ') == (bool)isspace(' '));
	ut.test_result("ft_isspace: newline '\\n' (true)",
				   (bool)ft_isspace('\n') == (bool)isspace('\n'));
	ut.test_result("ft_isspace: tab '\\t' (true)",
				   (bool)ft_isspace('\t') == (bool)isspace('\t'));
	ut.test_result("ft_isspace: letter 'x' (false)",
				   (bool)ft_isspace('x') == (bool)isspace('x'));
}

void isascii_test(UnitTest& ut) {
	ut.test_result("ft_isascii: 65 (A) (true)",
				   (bool)ft_isascii(65) == (bool)isascii(65));
	ut.test_result("ft_isascii: 127 (DEL) (true)",
				   (bool)ft_isascii(127) == (bool)isascii(127));
	ut.test_result("ft_isascii: 128 (out of range) (false)",
				   (bool)ft_isascii(128) == (bool)isascii(128));
}

void isprint_test(UnitTest& ut) {
	ut.test_result("ft_isprint: printable 'A' (true)",
				   (bool)ft_isprint('A') == (bool)isprint('A'));
	ut.test_result("ft_isprint: printable ' ' (true)",
				   (bool)ft_isprint(' ') == (bool)isprint(' '));
	ut.test_result("ft_isprint: non-printable '\\n' (false)",
				   (bool)ft_isprint('\n') == (bool)isprint('\n'));
}

void isupper_test(UnitTest& ut) {
	ut.test_result("ft_isupper: 'A' (true)",
				   (bool)ft_isupper('A') == (bool)isupper('A'));
	ut.test_result("ft_isupper: 'a' (false)",
				   (bool)ft_isupper('a') == (bool)isupper('a'));
	ut.test_result("ft_isupper: 'Z' (true)",
				   (bool)ft_isupper('Z') == (bool)isupper('Z'));
	ut.test_result("ft_isupper: '1' (false)",
				   (bool)ft_isupper('1') == (bool)isupper('1'));
}

void islower_test(UnitTest& ut) {
	ut.test_result("ft_islower: 'a' (true)",
				   (bool)ft_islower('a') == (bool)islower('a'));
	ut.test_result("ft_islower: 'A' (false)",
				   (bool)ft_islower('A') == (bool)islower('A'));
	ut.test_result("ft_islower: 'z' (true)",
				   (bool)ft_islower('z') == (bool)islower('z'));
	ut.test_result("ft_islower: '1' (false)",
				   (bool)ft_islower('1') == (bool)islower('1'));
}

void tolower_test(UnitTest& ut) {
	ut.test_result("ft_tolower: 'A' convert to 'a'",
				   ft_tolower('A') == tolower('A'));
	ut.test_result("ft_tolower: 'a' convert to 'a'",
				   ft_tolower('a') == tolower('a'));
	ut.test_result("ft_tolower: 'Z' convert to 'z'",
				   ft_tolower('Z') == tolower('Z'));
	ut.test_result("ft_tolower: '1' convert to '1'",
				   ft_tolower('1') == tolower('1'));
}

void toupper_test(UnitTest& ut) {
	ut.test_result("ft_toupper: 'a' convert to 'A'",
				   ft_toupper('a') == toupper('a'));
	ut.test_result("ft_toupper: 'A' convert to 'A'",
				   ft_toupper('A') == toupper('A'));
	ut.test_result("ft_toupper: 'z' convert to 'Z'",
				   ft_toupper('z') == toupper('z'));
	ut.test_result("ft_toupper: '1' convert to '1'",
				   ft_toupper('1') == toupper('1'));
}

void test_ft_ctype_module() {
	UnitTest ut{"Ft_Ctype"};

	ut.add_test(isalpha_test);
	ut.add_test(isdigit_test);
	ut.add_test(isalnum_test);
	ut.add_test(isascii_test);
	ut.add_test(isprint_test);
	ut.add_test(isspace_test);
	ut.add_test(isupper_test);
	ut.add_test(islower_test);
	ut.add_test(tolower_test);
	ut.add_test(toupper_test);

	// Collect results
	ut.run_tests();
}
