// Muallif: Umarov Islom
// Sana: 29.01.2013

#include <iostream>
#include <string>

using namespace std;

bool palindrom(string str)
{
    string c;

    for(int i = str.size() - 1; i >= 0 ; i--)
    c += str[i];

    if(c == str)
    return true;
    else
    return false;
}

int main()
{
    string s, st, str;
    int max = 1;

    cin >> s;

    if(s.size() == 1)
    {
    cout << s;
    //system("pause");
    return 0;
    }

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = s.size() - 1; j >= 0; j--)
        {
            if(s[i] == s[j])
            {
                str = s.substr(i, (j - i + 1));

                if(palindrom(str) == true)
                if(max < str.size())
                {
                       max = str.size();
                       st = str;
                }
            }
        }
    }

    cout << st;
    
    //system("pause");
    return 0;
}
