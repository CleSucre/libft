#include "../includes/libft.h"

#include <stdio.h>

int atoi_test(char *str, int expected, char *test_name)
{
	int res;

	res = ft_atoi(str);
	if (res != expected)
	{
		printf("%sKO%s : %s\n", BOLDRED, RESET, test_name);
		printf("Expected: %d\n", expected);
		printf("Got: %d\n", res);
		return (0);
	}
	return (1);
}

int main(void)
{
	int success;

	success = 0;
	success += atoi_test("\v   \v\v\v\v\v-2147483648", -2147483648, "ft_atoi test 1");
	success += atoi_test("\n\n  \n\n   \n21474s83647", 21474, "ft_atoi test 2");
	success += atoi_test("\v   \v\va\v\v\v-2147483648", 0, "ft_atoi test 3");
	success += atoi_test("\t\n   \r  \f\v\t  \n \r \f\v+23", 23, "ft_atoi test 4");
	success += atoi_test("\t\t\t\t   -23", -23, "ft_atoi test 5");
	success += atoi_test("\r   \r\r\r  \r\r+0", 0, "ft_atoi test 6");
	success += atoi_test("\f  \f\f\f\f\f\f-0", 0, "ft_atoi test 7");
	success += atoi_test("\n\n  \n\n   \n2147483647", 2147483647, "ft_atoi test 8");
	success += atoi_test("\v   \v\va\v\v\v-2147483648", 0, "ft_atoi test 9");
	success += atoi_test("   1234567890", 1234567890, "ft_atoi test 10");
	success += atoi_test("  -1234567890", -1234567890, "ft_atoi test 11");
	success += atoi_test("\t\n   \r  \f\v\t  \n \r \f\v+23", 23, "ft_atoi test 12");
	success += atoi_test("\t\t\t\t   -23", -23, "ft_atoi test 13");
	success += atoi_test("\r   \r\r\r  \r\r+0", 0, "ft_atoi test 14");
	success += atoi_test("\f  \f\f\f\f\f\f-0", 0, "ft_atoi test 15");
	success += atoi_test("\n\n  \n\n   \n2147483647", 2147483647, "ft_atoi test 16");
	success += atoi_test("\v   \v\va\v\v\v-2147483648", 0, "ft_atoi test 17");
	success += atoi_test("   1234567890", 1234567890, "ft_atoi test 18");
	success += atoi_test("  -1234567890", -1234567890, "ft_atoi test 19");
	success += atoi_test("\t\n   \r  \f\v\t  \n \r \f\v+abcd", 0, "ft_atoi test 20");
	success += atoi_test("\t\t\t\t   -efgh", 0, "ft_atoi test 21");
	success += atoi_test("\r   \r\r\r  \r\r+ijkl", 0, "ft_atoi test 22");
	success += atoi_test("\f  \f\f\f\f\f\f-mnop", 0, "ft_atoi test 23");
	success += atoi_test("\n\n  \n\n   \nqrst", 0, "ft_atoi test 24");
	success += atoi_test("\v   \v\va\v\v\vu\v", 0, "ft_atoi test 25");
	success += atoi_test("   xyzw", 0, "ft_atoi test 26");
	success += atoi_test("  -abcd", 0, "ft_atoi test 27");
	success += atoi_test("\t\n   \r  \f\v\t  \n \r \f\v+9999999", 9999999, "ft_atoi test 28");
	success += atoi_test("\t\t\t\t   -99999999", -99999999, "ft_atoi test 29");
	success += atoi_test("\r   \r\r\r  \r\r+0123456789", 123456789, "ft_atoi test 30");
	if (success != 30)
		printf("%sft_atoi: %d/30 tests passed%s", BOLDRED, success, RESET);
	else
		printf("%sft_atoi: All %d tests passed%s", BOLDGREEN, success, RESET);
	return (0);
}