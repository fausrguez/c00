#include "../test-suite/test-suite.h"
#include "../src/ft_putchar.h"

int	ft_putchar_test(void)
{
    describe("ft_putchar");
    it("Should display the character \"c\" when \"c\" is sent");
    ft_putchar('c');
    empty_line();
    it("Should display a new line when \"\\n\" is sent");
    ft_putchar('\n');
    empty_line();
    it("It should print 0 when it's call with 48 as int");
    ft_putchar(48);
    empty_line();
    it("Should display 42 when it's call with 52 and then with 50");
    ft_putchar(52);
    ft_putchar(50);
    empty_line();
    return (0);
}
