#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], b[10000], c[10000], k = 0, x = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
            if(a[i] % 2 == 0 && a[i] != 0)
            b[k++] = a[i];
            
            if(a[i] % 4 == 0 && a[i] != 0)
            c[x++] = a[i];
    }
    
    __int64 s = 0;
    
    if(k != 0)
    {
    for(int i = 0; i < k; i++)
    cout << b[i] << " ";
    }
    else
    cout << "NO";
    
    cout << endl;
    
    if(x != 0)
    {
            for(int i = 0; i < x; i++)
            {
            s += c[i];
            cout << c[i] << " ";
            }
            
            cout << endl;
    
            float v = float(s) / float(x);
            printf("%.2f", v);
    }
    else
    cout << "NO" << endl << "NO";
    
    system("pause");
    return 0;
}
