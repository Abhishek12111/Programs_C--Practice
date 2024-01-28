#include <iostream>

using namespace std;

int main()
{
    string str;
    string out;
 getline(cin, str);
    int i=0;
    while(str[i]!='\0'){

       char ch=tolower(str[i]);

        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
        {
            out +='.';
            out+=ch;
        }
        else
        out += ch;
        
        i++;
    }
    cout<<out;
    return 0;
}
