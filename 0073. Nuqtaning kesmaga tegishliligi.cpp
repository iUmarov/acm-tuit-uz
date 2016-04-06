#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
int main()
{
    int  xa, xb, xc, ya, yb, yc;
    double a, b, c;
    double AB, BC, AC, d, MA, MB;
    double tch, nur, kesma;
    
    cin >> xc >> yc;
    cin >> xa >> ya;
    cin >> xb >> yb;

    AC = sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
    AB = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    BC = sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));

    a = fabs((xa-xb)*(yc-yb)-(ya-yb)*(xc-xb));
    b = sqrt((yb-ya)*(yb-ya)+(xa-xb)*(xa-xb)); 
    d = a/b;

    MA = sqrt(AC*AC-d*d);
    MB = sqrt(BC*BC-d*d);
    
    tch = d;
    
    if (fabs(AB-(MA+MB))<0.000001) 
    {
       nur = d;
       kesma = d;
    } 
    else
    if (MA < MB)
    {
      nur = AC;
      kesma = AC;
    }
    else
    {
       nur = d;
       kesma = BC;
    }
    
    if(tch == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    
    if(nur == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    
    if(kesma == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    
    //system("pause");
    return 0;
}
