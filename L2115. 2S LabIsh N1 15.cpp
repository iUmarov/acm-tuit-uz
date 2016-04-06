#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    __int64 n, a[10000], s = 0, s1 = 0, i;
    __int64 index = 0, index1 = 0;
    bool b = true;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
            cin >> a[i];
            
            if(a[i] == 0 && b)
            {       
                    index = i;
                    b = false;
            }
    }
    
    b = true;
    
    for(i = n - 1; i >= 0; i--)
    {
            if(i % 2 == 1)
            s += a[i];
      
            if(a[i] == 0 && b)
            {
            b = false;
            index1 = i;
            }
    }
    
    for(int i = index + 1; i < index1; i++)
    s1 += a[i];
    
    cout << s << endl << s1;
    
    //getch();
    return 0;
}
    
