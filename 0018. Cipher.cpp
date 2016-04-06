#include <string.h>
#include <string>
#include <iostream>

using namespace std;
 
int main()
{
    string s, str;
    char ch[100];
    int n;
    
    cin >> s >> ch;
    
    n = atoi(ch);
   
    for(int i = 1; i < s.length() - 2; i++)
    {
        s[i] = (int) s[i] - n;

        if(s[i] <= 64)
        s[i] = s[i] + 90 - 64;
        
        str += (char) s[i];
    }
    
    cout << s[0] << str << s[0] << endl;
    
   //system("pause");
   return 0;   
}
