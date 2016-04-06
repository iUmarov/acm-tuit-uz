#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

bool Boudingbox(float , float , float , float);
float cw(float , float , float , float , float , float);

int main()
{
    double x1, x2, x3, x4, y1, y2, y3, y4;
    double t1, t2;
    double delta, delta_t1, delta_t2;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    
    if((cw(x1, y1, x2, y2, x3, y3) * cw (x1, y1, x2, y2, x4, y4) <= 0 ) && 
    (cw(x3, y3, x4, y4, x1, y1) * cw (x3, y3, x4, y4, x2, y2) <= 0 ) &&
    (Boudingbox(x1, x2, x3, x4) == true) &&
    (Boudingbox(y1, y2, y3, y4) == true))
    {
    cout << "YES";
    //system("pause");
    return 0;
    }
    
    delta = (x2-x1)*(y3-y4)-(x3-x4)*(y2-y1);
    delta_t1 = (x3-x1)*(y3-y4)-(x3-x4)*(y3-y1);
    delta_t2 = (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
    
    /*cout << delta << endl;
    cout << delta_t1 << endl;
    cout << delta_t2 << endl;*/
    
    if(delta == 0 && ((delta_t1 == 0) || (delta_t2 == 0)))
    {
             if((x2-x1)*(x4-x3) + (y2-y1)*(y4-y3) > 0)
             {
              cout << "YES";
              //system("pause");
              return 0;
             }
             else
             if((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2) > (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1))
              {
              cout << "NO";
              //system("pause");
              return 0;
              }
              else
              {
              cout << "YES";
              //system("pause");
              return 0;
             }
    }
    
    if(delta == 0 && ((delta_t1 != 0) || (delta_t2 != 0)))
    {
              cout << "NO";
              //system("pause");
              return 0;
    }
    
    if(delta != 0)
    {
    t1 = delta_t1 / delta;
    t2 = delta_t2 / delta;
    
    if((t1 >= 0) && (t2 >= 0))
    cout << "YES";
    else
    cout << "NO";
    }
    
    //system("pause");
    return 0;
}

bool Boudingbox(float a, float b, float c, float d)
{
     if(a > b)
     {
          float t = a;
          a = b;
          b = t;
     }
     
     if(c > d)
     {
          float t = c;
          c = d;
          d = t;
     }
     
     if(max(a, c) <= min(b, d))
     return 1;
     else
     return 0;
}

float cw(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
}

