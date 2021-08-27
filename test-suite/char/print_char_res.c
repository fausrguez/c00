void print_char_res(void (*real)(char), void (*handmade)(char), char c)
{
    real(c);
    handmade(c);
}