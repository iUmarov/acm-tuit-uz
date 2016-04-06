#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], s = 0, i;
    __int64 index, min, index1;
    bool b = true;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
          cin >> a[i];
          
          if(b && a[i] > 0)
          {
               b = false;
               index1 = i;
          }
    }
    
    b = true;
    min = a[0];
    
    for(i = n - 1; i >= 0; i--)
    {
            if(min > a[i])
            min = a[i];
            
            if(a[i] > 0 && b)
            {
            b = false;
            index = i;
            }
    }
    
    for(i = index1 + 1; i < index; i++)
    s += a[i];
    
    cout << min << endl << s;
    
    //getch();
    return 0;
}
    
