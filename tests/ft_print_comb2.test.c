#include "../test-suite/test-suite.h"
#include "../src/ft_print_comb2.h"

int	ft_print_comb2_test()
{
	describe("ft_print_comb2");
	it("Should display all different combinations of two digits \
between 00 and 99");
	ft_print_comb2();
	return (0);
}
