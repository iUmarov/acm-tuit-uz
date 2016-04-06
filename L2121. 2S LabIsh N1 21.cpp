#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], index, index1, s = 0, max;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    max = abs(a[0]);
    
    for(int i = 0; i < n; i++)
    {
            if(abs(a[i]) > max)
            max = abs(a[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
            if(a[i] > 0)
            {
                    index = i;
                    break;
            }
    }
    
    for(int i = index + 1; i < n; i++)
    {
            if(a[i] > 0)
            {
                    index1 = i;
                    break;
            }
    }
    
    
    for(int i = index + 1; i < index1; i++)
    s += a[i];
    
    cout << max << endl << s;
    
    getch();
    return 0;
}
