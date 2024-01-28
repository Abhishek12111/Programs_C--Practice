#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    string out;

    getline(cin, str); // Read input line including spaces

    int i = 0;

    for(i;i<str.length();i++){
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch=='y')
        {
            continue;
        }
        else{
            out+='.';
            out += ch;
        }

    }

    cout << out;
    return 0;
}
