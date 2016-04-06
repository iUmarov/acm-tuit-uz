#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 i, n, a[10001],  s = 0, index = 0, index1 = 0, min, min_index = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    cin >> a[i];
    
    min = a[0];
    
    for(i = 1; i < n; i++)
    {
            if(min > a[i])
            {
                   min = a[i];
                   min_index = i;
            }
    }
    
    for(i = 0; i < n; i++)
    {
          if(a[i] < 0)
          {
                  index = i;
                  break;
          }
    }
    
    for(i = index + 1; i < n; i++)
    {
            if(a[i] < 0)
            {
            index1 = i;
            break;
            }
    }
    
    for(i = index + 1; i < index1; i++)
    s += a[i];
    
    cout << min_index;
    cout << endl;
    cout << s;
    
    //getch();
    return 0;
}
    
