#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool Boudingbox(int , int , int , int);
int cw(int , int , int , int , int , int);

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    if((cw(x1, y1, x2, y2, x3, y3) * cw (x1, y1, x2, y2, x4, y4) <= 0 ) && 
    (cw(x3, y3, x4, y4, x1, y1) * cw (x3, y3, x4, y4, x2, y2) <= 0 ) &&
    (Boudingbox(x1, x2, x3, x4) == true) &&
    (Boudingbox(y1, y2, y3, y4) == true))
    cout << "YES";
    else
    cout << "NO";
    
    //system("pause");
    return 0;
}


bool Boudingbox(int a, int b, int c, int d)
{
     if(a > b)
     {
          int t = a;
          a = b;
          b = t;
     }
     
     if(c > d)
     {
          int t = c;
          c = d;
          d = t;
     }
     
     if(max(a, c) <= min(b, d))
     return 1;
     else
     return 0;
}

int cw(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
}
