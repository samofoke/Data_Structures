#include "../header/std_lib_facilities.h"

using namespace std;

void solution(string str)
{
    for (int index = 0; str[index] != '\0'; index++)
    {
        if (str[index] == '^' || (str[index] == '<' || 'v'))
        {
            cout<<2<<'\n';
        }
        else if (str[index] == '>' || str[index] == 'v')
        {
            cout<<3<<'\n';
        }
        else
        {
            if (str[index] == '<')
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
