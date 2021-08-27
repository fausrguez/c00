#include "../test-suite/test-suite.h"
#include "../src/ft_putnbr.h"

int	ft_putnbr_test()
{
	describe("ft_putnbr_test");
	it("Should display \"1\" when is called with 1");
	ft_putnbr(1);
	empty_line();
	it("Should display \"-2\" when is called with -2");
	ft_putnbr(-2);
	empty_line();
	it("Should display \"10\" when is called with 10");
	ft_putnbr(10);
	empty_line();
	it("Should display \"100\" when is called with 100");
	ft_putnbr(100);
	empty_line();
	it("Should display \"2147483647\" when is called with INT_MAX");
	ft_putnbr(INT_MAX);
	empty_line();
	it("Should display \"-2147483648\" when is called with INT_MIN");
	ft_putnbr(INT_MIN);
	empty_line();
	return (0);
}
