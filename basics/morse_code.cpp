#include "../header/std_lib_facilities.h"

using namespace std;

string morse_character(char c)
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string mosrse_text[] = {
        "*_",
        "_**",
        "_*_*",
        "_**",
        "*",
        "**_*",
        "__*",
        "****",
        "**",
        "*___",
        "_*_",
        "*_**",
        "__",
        "_*",
        "___",
        "*__*",
        "__*_",
        "*_*",
        "***",
        "_",
        "**_",
        "***_",
        "*__",
        "_**_",
        "_*__",
        "__**"
    };

    int x = mosrse_text.find(c);
    if (x != -1)
    {
        return alpha[x];
    }
    else
    {
        return " ";
    }
}

int main()
{
    string *i;

    scanf("%c", &i);
    string t = "";
    for (int x = 0; x < i.length(); x++)
    {
        t += morse_character(i[x]);
    }
    cout<< t <<endl;
    return 0;
}


