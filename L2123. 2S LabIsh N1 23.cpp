#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 a[10001], n, min, min_index, s = 0, index, i;
    bool bor = false;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    cin >> a[i];
    
    min = abs(a[0]);
    min_index = 0;
    
    for(i = 1; i < n; i++)
    if(min > abs(a[i]))
    {
           min = abs(a[i]);
           min_index = i;
    }
    
    for(i = 0; i < n; i++)
    {
            if(a[i] == 0)
            {
                    index = i;
                    bor = true;
                    break;
            }
    }
    
    if(bor)
    for(i = index + 1; i < n; i++)
    s += a[i];
    
    
    cout << a[min_index] << endl << s;
    
    //getch();
    return 0;
}
