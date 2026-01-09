#include <iostream>
#include <string>

std::string uppercase_string (char *str)
{
    ssize_t i = -1;
    std::string string = "";
    while (str[++i])
        string = string + (char)toupper(str[i]);
    return (string);
}
int main (int argc, char **argv)
{
    std::string string = "";
    ssize_t i = 0;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(1);
    }
    else while (argv[++i] != NULL)
    {
        if (i != 1)
            string.append(" ");
        string.append(uppercase_string(argv[i]));
    }
    std::cout << string << std::endl;
}
