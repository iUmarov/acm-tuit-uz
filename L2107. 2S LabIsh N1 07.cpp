#include <iostream>

using namespace std;

int main()
{
    __int64 a[10000], b[10000], n, k = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
            cin >> a[i];
            if(a[i] != 0)
            k++;
    }
    
    for(int i = 0; i < n; i++)
    {
            if(a[i] != 0)
            cout << (-1)*a[i] << " ";
            else
            cout << a[i] << " ";
    }
    
    cout << endl << k << endl;
    
    //system("pause");
    return 0;
}
