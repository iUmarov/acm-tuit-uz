#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k = 1;
    char a[100];
    string c, x, s[4000];
    
    gets(a);
    n = atoi(a);
    
    getline(cin, c);
    c += " ";
    
    for(int i = 0; i < c.length(); i++)
    {
            if(c[i] == ' ')
            {
                    s[k++] = x;
                    x.clear();
            }
            else
            x += c[i];
    }
    
    for(int i = 1; i <= 10; i++)
    {
            if(n != i)
            cout << s[i] << " ";
    }
    
    //system("pause");
    return 0;
}
