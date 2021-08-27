#include "../test-suite/test-suite.h"
#include "../src/ft_print_alphabet.h"

int	ft_print_alphabet_test(void)
{
    describe("ft_print_alphabet");
    it("Should print the alphabet in lowercase, on a single line, \
by ascending order, starting from the letter 'a'");
    ft_print_alphabet();
    empty_line();
    return 0;
}
