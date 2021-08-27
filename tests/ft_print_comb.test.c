#include "../test-suite/test-suite.h"
#include "../src/ft_print_comb.h"

int	ft_print_comb_test()
{
	describe("ft_print_comb");
	it("Should display all different combinations of three different \
digits in ascending order");
	ft_print_comb();
	empty_line();
	return (0);
}
