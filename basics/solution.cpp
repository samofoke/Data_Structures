#include "../header/std_lib_facilities.h"

using namespace std;

void solution(string str)
{
    char up = '^';
    char down = 'v';
    char left = '<';
    char right = '>';

    for (int index = 0; str[index] != '\0'; index++)
    {
        if (str[index] == up || str[index] == left || str[index] == down)
        {
            cout<<2<<'\n';
        }
        else if (str[index] == left || str[index] == down)
        {
            cout<<3<<'\n';
        }
        else
        {
            if (str[index] == left)
            {
                cout<<0<<'\n';
            }
        }
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        //printf("%s \n", solution(av[1]));
        //printf("%d \n", solution(av[1]));
        solution(av[1]);
    }
    return 0;
}
