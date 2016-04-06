#include <iostream>

using namespace std;

int main()
{
    __int64 n, S = 0;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
            if(n % i == 0)
            S++;
    }
    
    if(S == 2)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}
