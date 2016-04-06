#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool Boudingbox(__int64 , __int64 , __int64 , __int64);
__int64 cw(__int64 , __int64 , __int64 , __int64 , __int64 , __int64);

int main()
{
    __int64 x1, y1, x2, y2, x3, y3, x4, y4;
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    if((cw(x1, y1, x2, y2, x3, y3) * cw (x1, y1, x2, y2, x4, y4) <= 0 ) && 
    (cw(x3, y3, x4, y4, x1, y1) * cw (x3, y3, x4, y4, x2, y2) <= 0 ) &&
    (Boudingbox(x1, x2, x3, x4) == true) &&
    (Boudingbox(y1, y2, y3, y4) == true))
    cout << "Yes";
    else
    cout << "No";
    
    //system("pause");
    return 0;
}

bool Boudingbox(__int64 a, __int64 b, __int64 c, __int64 d)
{
     if(a > b)
     {
          __int64 t = a;
          a = b;
          b = t;
     }
     
     if(c > d)
     {
          __int64 t = c;
          c = d;
          d = t;
     }
     
     if(max(a, c) <= min(b, d))
     return 1;
     else
     return 0;
}

__int64 cw(__int64 x1, __int64 y1, __int64 x2, __int64 y2, __int64 x3, __int64 y3)
{
    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
}
