#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000],  p = 1, index, index1, max, max_index = 0;
    bool b = true;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
            cin >> a[i];
            
            if(a[i] == 0 && b)
            {
            index = i;
            b = false;
            }
    }

    for(int i = index + 1; i < n; i++)
    {
            if(a[i] == 0)
            {
            index1 = i;
            break;
            }
    }
    
    max = a[0]; 
      
    for(int i = 1; i < n; i++)
    {
            if(max < a[i])
            {
                   max = a[i];
                   max_index = i;
            }
    }
    
    for(int i = index + 1; i < index1; i++)
    p *= a[i];
    
    cout << max_index << endl << p;
    
    //getch();
    return 0;
}
    
