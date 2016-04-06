#include <iostream.h>
#include <math.h>

using namespace std;
     
int main()
{
    double S, S1, S2, S3;
    double x1, x2, x3, y1, y2, y3, x, y;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x >> y;
    
    S  = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    
    S1 = fabs(x * (y2 - y3) + x2 * (y3 - y) + x3 * (y - y2));
    
    S2 = fabs(x1 * (y - y3) + x * (y3 - y1) + x3 * (y1 - y));
    
    S3 = fabs(x1 * (y2 - y) + x2 * (y - y1) + x * (y1 - y2));
    
    if(fabs(S - (S1 + S2 + S3)) < 0.000001)
    cout << "In";
    else
    cout << "Out";
    
  //system("pause");
  return 0;
}
