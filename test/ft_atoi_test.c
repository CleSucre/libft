#include "../includes/libft.h"
#include "../includes/debug.h"

#define TEST_NAME "ft_atoi"

static int exec_test(char *str, int expected, int test_num)
{
	int res;

	res = ft_atoi(str);
	if (res != expected)
	{
		printf("%sKO%s : test %d\n", BOLDRED, RESET, test_num);
		printf("Expected: %d\n", expected);
		printf("Got: %d\n", res);
		return (0);
	}
	return (1);
}

int atoi_test(void)
{
	int success;
    int executed;

	success = 0;
    executed = 0;
	success += exec_test("\v   \v\v\v\v\v-2147483648", -2147483648, executed++);
	success += exec_test("\n\n  \n\n   \n21474s83647", 21474, executed++);
	success += exec_test("\v   \v\va\v\v\v-2147483648", 0, executed++);
	success += exec_test("\t\n   \r  \f\v\t  \n \r \f\v+23", 23, executed++);
	success += exec_test("\t\t\t\t   -23", -23, executed++);
	success += exec_test("\r   \r\r\r  \r\r+0", 0, executed++);
	success += exec_test("\f  \f\f\f\f\f\f-0", 0, executed++);
	success += exec_test("\n\n  \n\n   \n2147483647", 2147483647, executed++);
	success += exec_test("\v   \v\va\v\v\v-2147483648", 0, executed++);
	success += exec_test("   1234567890", 1234567890, executed++);
	success += exec_test("  -1234567890", -1234567890, executed++);
	success += exec_test("\t\n   \r  \f\v\t  \n \r \f\v+23", 23, executed++);
	success += exec_test("\t\t\t\t   -23", -23, executed++);
	success += exec_test("\r   \r\r\r  \r\r+0", 0, executed++);
	success += exec_test("\f  \f\f\f\f\f\f-0", 0, executed++);
	success += exec_test("\n\n  \n\n   \n2147483647", 2147483647, executed++);
	success += exec_test("\v   \v\va\v\v\v-2147483648", 0, executed++);
	success += exec_test("   1234567890", 1234567890, executed++);
	success += exec_test("  -1234567890", -1234567890, executed++);
	success += exec_test("\t\n   \r  \f\v\t  \n \r \f\v+abcd", 0, executed++);
	success += exec_test("\t\t\t\t   -efgh", 0, executed++);
	success += exec_test("\r   \r\r\r  \r\r+ijkl", 0, executed++);
	success += exec_test("\f  \f\f\f\f\f\f-mnop", 0, executed++);
	success += exec_test("\n\n  \n\n   \nqrst", 0, executed++);
	success += exec_test("\v   \v\va\v\v\vu\v", 0, executed++);
	success += exec_test("   xyzw", 0, executed++);
	success += exec_test("  -abcd", 0, executed++);
	success += exec_test("\t\n   \r  \f\v\t  \n \r \f\v+9999999", 9999999, executed++);
	success += exec_test("\t\t\t\t   -99999999", -99999999, executed++);
	success += exec_test("\r   \r\r\r  \r\r+0123456789", 123456789, executed++);
	if (success != executed)
		printf("%s%s: %d/%d tests passed%s", BOLDRED, TEST_NAME, success, executed, RESET);
	else
		printf("%s%s: All %d tests passed%s", BOLDGREEN, TEST_NAME, success, RESET);
	return (0);
}