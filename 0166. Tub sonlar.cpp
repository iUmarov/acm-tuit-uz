#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    __int64 n, m, s;
    bool b;
    
    cin >> m;
    cin >> n;
    
    for(int i = m; i <= n; i++)
    {
            s = 0;
                                 
            for(int j = 2; j * j <= i; j++)
            {
                    if(i % j == 0)
                    s++;
            }
            
            if(s == 0)
            {
            cout << i << endl;
            b = true;
            }
    }
    
    if(! (b == true) )
    cout<<"Absent";
    
//system("pause");
return 0;
}
