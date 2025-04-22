#include <iostream>
#include <stdlib.h>

char    cap(char *arg)
{
    int index = 0;
    while(arg[index] != '\0')
    {
        toupper(arg[index])
        index++;
    }
    return (&arg);

}
int main(int argc, char **argv)
{
    int index = 0;
    if (argc == 0)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while(argc)
    {
        std::cout << cap(argv[index]) << std::endl;
        index++;
    }
    return (0);
}