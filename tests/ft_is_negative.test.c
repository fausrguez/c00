#include "../test-suite/test-suite.h"
#include "../src/ft_is_negative.h"

int	ft_is_negative_test()
{
	describe("ft_is_negative");
	it("Should display 'N' when is called with -50");
	ft_is_negative(-50);
	empty_line();
	it("Should display 'P' when is called with 1000");
	ft_is_negative(1000);
	empty_line();
	it("Should display 'P' when is called with 0");
	ft_is_negative(0);
	empty_line();
	return (0);
}
