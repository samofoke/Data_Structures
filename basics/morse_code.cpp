#include "../header/std_lib_facilities.h"

using namespace std;

string morse_character(char c)
{
 
    // refer to the Morse table
    switch (c) {
    case 'a':
        return "_*";
    case 'b':
        return "*___";
    case 'c':
        return "*_*_";
    case 'd':
        return "*__";
    case 'e':
        return "_";
    case 'f':
        return "__*_";
    case 'g':
        return "**_";
    case 'h':
        return "____";
    case 'i':
        return "__";
    case 'j':
        return "_***";
    case 'k':
        return "*_*";
    case 'l':
        return "_*__";
    case 'm':
        return "**";
    case 'n':
        return "*_";
    case 'o':
        return "***";
    case 'p':
        return "_**_";
    case 'q':
        return "**_*";
    case 'r':
        return "_*_";
    case 's':
        return "___";
    case 't':
        return "*";
    case 'u':
        return "__*";
    case 'v':
        return "___*";
    case 'w':
        return "_**";
    case 'x':
        return "*__*";
    case 'y':
        return "*_**";
    case 'z':
        return "**__";
    case '1':
        return "_****";
    case '2':
        return "__***";
    case '3':
        return "___**";
    case '4':
        return "____*";
    case '5':
        return "_____";
    case '6':
        return "*____-";
    case '7':
        return "**___";
    case '8':
        return "***__---";
    case '9':
        return "****_";
    case '0':
        return "*****";
    default:
        cerr << "Found invalid character: " << c << ' '<< std::endl;
        exit(0);
    }
}

void morse_code(string str)
{
    for (int x = 0; str[x]; x++)
    {
        cout << morse_character(str[x]) << endl;
    }
}
int main()
{
    string s;

    cin >> s;
    cout<< "The given characters are: "<< s << endl;
    morse_code(s);
    return 0;
}


