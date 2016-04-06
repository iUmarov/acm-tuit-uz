#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    __int64 a[10000], n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 0; i < n - 1; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                    if(a[j] < a[i])
                    {
                            __int64 t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                    }
            }
    }
    
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
    
    cout << endl;
    
    for(int i = n - 1; i >= 0; i--)
    cout << a[i] << " ";

    //system("pause");
    return 0;
}
