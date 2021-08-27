#include "../test-suite/test-suite.h"
#include "../src/ft_print_numbers.h"

int	ft_print_numbers_test()
{
	describe("ft_print_numbers");
	it("Should display all digits, on a single line, by ascending order");
	ft_print_numbers();
	empty_line();
	return (0);
}
