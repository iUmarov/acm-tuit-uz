#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], s = 0, i;
    __int64 index, max;
    bool b = true;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    cin >> a[i];
    
    max = a[0];
    
    for(i = 1; i < n; i++)
    {
            if(max < a[i])
            max = a[i];
    }
    
    for(i = n - 1; i >= 0; i--)
    {
            if(a[i] > 0)
            {
            index = i;
            break;
            }
    }
    
    for(i = 0; i < index; i++)
    s += a[i];
    
    cout << max << endl << s;
    
    //getch();
    return 0;
}
    
