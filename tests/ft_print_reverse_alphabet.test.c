#include "../test-suite/test-suite.h"
#include "../src/ft_print_reverse_alphabet.h"

int	ft_print_reverse_alphabet_test(void)
{
	describe("ft_print_reverse_alphabet");
	it("Should display the alphabet in lowercase, on a single line, \
by descending order, starting from the letter 'z'.");
	ft_print_reverse_alphabet();
	empty_line();
	return (0);
}
