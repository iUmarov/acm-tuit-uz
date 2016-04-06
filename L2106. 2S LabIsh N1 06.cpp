#include <iostream>

using namespace std;

int main()
{
    __int64 n, a[10000], b[10000];
    int k = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
            if(a[i] % 3 == 0 && a[i] != 0)
            b[k++] = a[i];
    }
    
    __int64 s = 0;
    //cout << k << endl;
    if(k != 0)
    {
         for(int i = 0; i < k; i++)
         {
            s += b[i];
            cout << b[i] << " ";
         }
         
         //cout << s << endl;
         cout << endl;
    
            printf("%.2f", float(s) / float(k));
    }
    else
    cout << "NO" << endl << "NO" << endl;
    
    //system("pause");
    return 0;
}
