#include <iostream>

using namespace std;

int main()
{
    __int64 n, t = 0 ;

    cin >> n;

    __int64 *a = new __int64[n], *b = new __int64[n];

    for(int i = 0; i < n; i++)
    cin >> a[i];

    b[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        bool yoq = true;
        for(int j = 0; j <= t; j++)
        {
            if(a[i] == b[j])
            {
                yoq = false; break;
            }
        }
        if(yoq)
        b[++t] = a[i];
    }

    for(int i = 0; i <= t; i++)
    cout << b[i] << endl;

    delete[]a;
    delete[]b;
    
    //system("pause");
    return 0;
}
