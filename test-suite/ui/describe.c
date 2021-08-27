#include "../test-suite.h"

void describe(char *test_name)
{
    printf("%s", yellow);
    printf("%s:\n", test_name);
    printf("%s", nocolor);
}

void it(char *test_name)
{
    printf("🢥 %s\n", test_name);
}