#include <iostream>
#include <sys/types.h>

int main (int argc, char **argv)
{
    ssize_t i = 0;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(1);
    }
    else while (argv[++i] != NULL)
    {
        if (i != 1)
            std::cout << " ";
        for(ssize_t j = 0; argv[i][j] != '\0'; j++)
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
}
