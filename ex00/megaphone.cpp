#include <iostream>

static unsigned char  ft_toupper(unsigned char ch)
{
    if (ch <= 'a' && ch >= 'z')
        return (ch - 'a' + 'A');
    return ch;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int strIdx = 1; argv[strIdx]; strIdx++)
        for(int chIdx = 0; argv[strIdx][chIdx]; chIdx++)
            std::cout << ft_toupper(argv[strIdx][chIdx]);
    std::cout << std::endl;
    return (0);
}